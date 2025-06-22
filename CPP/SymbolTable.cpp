#include<bits/stdc++.h>
using namespace std;





class SymbolInfo
{
    string SymbolName;
    string SymbolType;
    string ASMcode;   
    string SymbolId;

public:
    bool Function;
    bool defined;
    bool declared;
    bool isArray;
    SymbolInfo* next;
    string returnType;
    vector<string> parameters;
    vector<string> ptypes;

    int parameterCount()
    {
        return parameters.size();
    }

    bool isFunction()
    {
        return Function;
    }

    bool isDefined()
        {
            return defined;
        }

    bool isDeclared()
        {
            return declared;
        }

    SymbolInfo()
    {
        SymbolId = "";
        next = 0;
        isArray = false;
    }

    void setAsFunction()
    {
        Function = true;
        defined = false;
        declared = false;
        parameters.clear();
        ptypes.clear();
    }

    void setSymbolId(string one)
    {
        SymbolId = one;
    }

    string getSymbolId()
    {
        return SymbolId;
    }



    SymbolInfo(string name,string type)
    {
        SymbolName = name;
        SymbolType = type;
        ASMcode = "";
        returnType = type;
        Function = false;
        next = 0;
        isArray = false;
        SymbolId = "";
    }

    SymbolInfo(string name,string type, string rtype)
    {
        SymbolName = name;
        SymbolType = type;
        ASMcode = "";
        SymbolId = "";
        Function = false;
        next = 0;
        returnType = rtype;
        isArray = false;

    }

    void setName(string name)
    {
        SymbolName = name;
    }
    void setType(string type)
    {
        SymbolType = type;
    }
    void setASMcode(string one)
    {
        ASMcode = one;
    }
    string getName()
    {
        return SymbolName;
    }
    string getType()
    {
        return SymbolType;
    }
    string getASMcode()
    {
        return ASMcode;
    }

};

class ScopeTable
{
    int tableSize;
    int id; //unique
    vector<SymbolInfo*>* arr;
    int ScopeCount = 0;

public:
    ScopeTable* parent;

    ScopeTable(int N,ScopeTable* p)
    {
        tableSize = N;
        arr = new vector<SymbolInfo*>[N];
        parent = p;
        id = ++ScopeCount;
    }

    int Hash(string key)
        {
            int hashVal = 0;
			for(int i = 0; i<key.length();  i++)
			hashVal = 37*hashVal+key[i];
			hashVal %= tableSize;
			if(hashVal<0)
			hashVal += tableSize;
			return hashVal%tableSize;
        }

    bool Look_up(string name)
    {

        int ind = Hash(name);


        for(int i=0;i<arr[ind].size();i++){

            if(arr[ind][i]->getName().compare(name)==0)
                {
                    
                    return true;
                }

        }


        return false;
    }

    SymbolInfo* getInstanceOf(string name)
    {
        int ind = Hash(name);


        for(int i=0;i<arr[ind].size();i++){

            if(arr[ind][i]->getName().compare(name)==0)
                {
                   // //cout << "    " << "item found in ScopeTable#" <<id<< " at position "<< ind<<","<<i<<endl;
                    //cout << "paisiii mammah!";
                    return arr[ind][i];
                }

        }   
    }

    bool Insert(SymbolInfo* rhs)
    {
        string name = rhs->getName();
        string type = rhs->getType();

        if( Look_up(name) ) return false;

        int ind = Hash(name);

        SymbolInfo* temp = new SymbolInfo(name,type);

        arr[ind].push_back(temp);
        // << "    " << "Inserted in ScopeTable#"<<id<< " at position "<<ind<<","<<arr[ind].size()-1<<endl;
        return true; //successfully inserted
    }

    SymbolInfo* InsertFunc(SymbolInfo* rhs)
    {
        string name = rhs->getName();
        string type = rhs->getType();

        if( Look_up(name) ) return 0;

        int ind = Hash(name);

        SymbolInfo* temp = new SymbolInfo(name,type);
        temp->setAsFunction();
        arr[ind].push_back(temp);
        // << "    " << "Inserted in ScopeTable#"<<id<< " at position "<<ind<<","<<arr[ind].size()-1<<endl;
        return temp; //successfully inserted
    }




    bool Delete(string name)
    {
        int ind = Hash(name);


        for(int i=0;i<arr[ind].size();i++){

            if(arr[ind][i]->getName().compare(name)==0)
                {
                    arr[ind].erase(arr[ind].begin()+i);
                    //cout << "    item deleted!" << endl;
                    return true;
                }

        }

        //cout << "    item not found!" << endl;
        return false;
    }

    void Print(FILE *finp)
    {
        ////cout << "    " << "Showing ScopeTabl#"<<id<<endl;
        fprintf(finp, "\n   >> Scope Table <<\n");
        for(int i=0;i<tableSize;i++)
        {
           // //cout << "    " << i << "->";
            if(arr[i].size()>0){
            fprintf(finp, "   %d -> ",i );
            
            for(int j=0;j<arr[i].size();j++){
                  //  //cout << "<" << arr[i][j]->getName() << ":" << arr[i][j]->getType() << ">" <<" , ";
                char *getname = new char[arr[i][j]->getName().length() + 1];
                strcpy(getname, arr[i][j]->getName().c_str());
                char *gettype = new char[arr[i][j]->getType().length() + 1];
                strcpy(gettype, arr[i][j]->getType().c_str());
                fprintf(finp, "<%s,%s>    ", getname,gettype);
            }

            ////cout << endl;
            fprintf(finp, "\n");
        }
    }
        ////cout << endl;
        fprintf(finp, "\n\n");
    }

};

class SymbolTable
{
    int current_id, tableSize;
    vector<ScopeTable*> arr;
    ScopeTable * current;
    FILE* fp;

public:
    SymbolTable(int N)
    {
        tableSize = N;
        current_id = 0;
        current = 0;
    }

    SymbolTable(FILE *inp,int N)
    {
        tableSize = N;
        current_id = 0;
        current = 0;
        fp= inp;
      //  fprintf(fp, "ScopeTable created!!");
    }

    void Enter_Scope()
    {
        current_id++;
        ScopeTable* newScope;

        if(arr.empty())
        {
           newScope = new ScopeTable(tableSize,0);
        }
        else
        {
            newScope = new ScopeTable(tableSize,current);

        }
         current = newScope;
         arr.push_back(newScope);
         //cout << "    " << "ScopeTable#"<<current_id<< " created!" << endl;
    }

    void Exit_Scope()
    {
        if(current_id==0)
        {
            //cout << "    Scope table not found!" << endl;
        }

        //cout << "    Exited from Scope : #" << current_id << endl;

        current_id--;
        current = current->parent;
        arr.pop_back();
    }

    string getScopeId()
    {
        return to_string(current_id);
    }

    bool InsertInto(SymbolInfo *rhs)
    {
        if(current != 0)
            current->Insert(rhs);
        else
        {
            Enter_Scope();
            return current->Insert(rhs);
        }
    }

    bool InsertInto(string name,string type)
    {
        if(current != 0)
            current->Insert(new SymbolInfo(name,type));
        else 
        {
            Enter_Scope();
            return current->Insert(new SymbolInfo(name,type));
        }
    }

    SymbolInfo* InsertIntoFunction(string name,string type)
    {
        if(current != 0)
           return current->InsertFunc(new SymbolInfo(name,type));
        else 
        {
            Enter_Scope();
            return current->InsertFunc(new SymbolInfo(name,type));
        }
    }

    bool Delete(string name)
    {
        if(current !=0 )
        {
            return current->Delete(name);
        }
        else
        {
            //cout << "    Scope table not found!" << endl;
            return false;
        }
    }

    bool lookup_global(string name)
    {
        if(current != 0)
        {
            for(int i=current_id-1;i>=0;i--)
            {
                if(arr[i]->Look_up(name)==true)
                {
                    return true;
                }
            }
            //cout << "    item not found!" << endl;
            return false;
        }
        else
        {
            //cout << "    item not found!" << endl;
            return false;
        }
    }

    bool lookup_current(string name)
    {
        if(current != 0)
        {
                if(arr[current_id-1]->Look_up(name)==true)
                {
                    return true;
                }
            
            //cout << "    item not found!" << endl;
            return false;
        }
        else
        {
            //cout << "    item not found!" << endl;
            return false;
        }
    }

   SymbolInfo* getInstanceOf_global(string name)
   {
    if(current != 0)
        {
            for(int i=current_id-1;i>=0;i--)
            {
                if(arr[i]->getInstanceOf(name)!=0)
                {
                    
                    return arr[i]->getInstanceOf(name);
                }
            }
          
            return 0;
        }
        else
        {
            return 0;
        }
   }

   SymbolInfo* getInstanceOf_current(string name)
   {

        if(arr[current_id-1]->getInstanceOf(name)!=0)
        {
            
            return arr[current_id-1]->getInstanceOf(name);
        }
            
        
        return 0;
        
   }
   

    void print_current()
    {
        return current->Print(fp);
    }

    void print_all()
    {
        ScopeTable *temp=current;
        for(int i=current_id-1;i>=0;i--)
        {
            arr[i]->Print(fp);
        }
    }

};