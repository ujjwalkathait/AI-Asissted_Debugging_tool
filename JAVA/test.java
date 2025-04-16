import java.util.*; // Importing Java libraries

// Class definition
public class TestLexer {
    
    // Constants
    public static final int MAX_VALUE = 100;
    
    // Constructor
    public TestLexer() {
        System.out.println("Lexer Test Initialized.");
    }
    
    // Method to demonstrate all types of tokens
    public void demonstrateTokens() {
        // Single-line comment
        int num1 = 10;  // Integer literal
        float num2 = 20.5f;  // Float literal
        double num3 = 3.14e2;  // Scientific notation
        
        // Multi-line comment
        /* This is a 
           multi-line comment */
        
        // Hexadecimal, Binary, Octal
        int hexVal = 0x1A3F; // Hexadecimal
        int binVal = 0b1010; // Binary
        int octVal = 0757;  // Octal
        
        // String literals
        String str1 = "Hello, Lexer!";
        String str2 = "Escape sequences: \n \t \\ \" ' ";
        String multiLine = """
            This is a multi-line string
            using triple quotes.
        """;
        
        // Char literals
        char letter = 'A';
        char escapeChar = '\n';
        
        // Boolean values
        boolean isActive = true;
        
        // Operators
        int sum = num1 + 5;
        int diff = num1 - 2;
        int product = num1 * 3;
        int quotient = num1 / 2;
        int remainder = num1 % 3;
        
        // Relational Operators
        boolean result = (num1 > num2) && (num1 != num3);
        
        // Bitwise operators
        int bitwiseAnd = num1 & 0xF;
        int bitwiseOr = num1 | 0xF;
        int bitwiseXor = num1 ^ 0xF;
        int bitwiseNot = ~num1;
        
        // Logical operators
        boolean andOp = (num1 > 0) && (num2 < 50);
        boolean orOp = (num1 < 0) || (num2 < 50);
        
        // Conditional / Ternary Operator
        int minVal = (num1 < num2) ? num1 : (int)num2;
        
        // Loops
        for (int i = 0; i < 5; i++) {
            System.out.println("Loop index: " + i);
        }
        
        int j = 0;
        while (j < 3) {
            System.out.println("While loop: " + j);
            j++;
        }
        
        // Try-catch block
        try {
            int div = num1 / 0; // This will throw an exception
        } catch (ArithmeticException e) {
            System.out.println("Caught division by zero.");
        } finally {
            System.out.println("Finally block executed.");
        }
        
        // Switch-case
        int choice = 2;
        switch (choice) {
            case 1:
                System.out.println("Choice is 1");
                break;
            case 2:
                System.out.println("Choice is 2");
                break;
            default:
                System.out.println("Invalid choice");
        }
        
        // Arrays
        int[] numbers = {1, 2, 3, 4, 5};
        for (int num : numbers) {
            System.out.println("Array element: " + num);
        }
        
        // Function Call
        printMessage("Testing lexer with Java code.");
        
        // Class instance
        InnerClass inner = new InnerClass();
        inner.display();
        
        // Using an anonymous class
        Runnable r = new Runnable() {
            @Override
            public void run() {
                System.out.println("Anonymous class running.");
            }
        };
        r.run();
        
        // Lambda expression
        Runnable lambda = () -> System.out.println("Lambda expression running.");
        lambda.run();
    }
    
    // Method with parameters
    public void printMessage(String message) {
        System.out.println("Message: " + message);
    }
    
    // Inner class
    class InnerClass {
        void display() {
            System.out.println("Inside InnerClass");
        }
    }
    
    // Static nested class
    static class NestedStaticClass {
        void show() {
            System.out.println("Inside NestedStaticClass");
        }
    }
    
    // Enum declaration
    enum Days {
        MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY;
    }
    
    // Interface
    interface SampleInterface {
        void execute();
    }
    
    // Main method
    public static void main(String[] args) {
        // Annotation usage
        @Deprecated
        int deprecatedVar = 5;
        
        System.out.println("Starting Lexer Test...");
        
        // Creating an instance
        TestLexer lexerTest = new TestLexer();
        lexerTest.demonstrateTokens();
        
        // Using enum
        Days today = Days.FRIDAY;
        System.out.println("Today is: " + today);
        
        // Instance of nested static class
        NestedStaticClass nested = new NestedStaticClass();
        nested.show();
        
        // Implementing interface
        SampleInterface impl = new SampleInterface() {
            public void execute() {
                System.out.println("Interface implemented in anonymous class.");
            }
        };
        impl.execute();
    }
}
