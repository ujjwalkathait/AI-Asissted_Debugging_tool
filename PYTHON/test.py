# Import statements
import math
import sys
from datetime import datetime

# Predefined constants
PI = 3.14159
E = 2.718

# Function definitions
def greet(name: str) -> str:
    """Function to return a greeting message"""
    return f"Hello, {name}!"

def factorial(n: int) -> int:
    """Recursive function to calculate factorial"""
    if n <= 1:
        return 1
    return n * factorial(n - 1)

# Class definition
class Person:
    """A simple Person class"""
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def get_info(self):
        return f"Name: {self.name}, Age: {self.age}"

# Using loops and conditionals
for i in range(1, 11):
    if i % 2 == 0:
        print(f"{i} is even")
    else:
        print(f"{i} is odd")

# List comprehension
squares = [x**2 for x in range(10)]
print("Squares:", squares)

# Lambda function
double = lambda x: x * 2
print("Double of 5:", double(5))

# Exception handling
try:
    result = 10 / 0
except ZeroDivisionError:
    print("Cannot divide by zero!")
finally:
    print("Execution finished.")

# Dictionary operations
student = {"name": "John", "age": 20, "marks": 85}
student["grade"] = "A"

# Set operations
unique_numbers = {1, 2, 3, 4, 4, 5}
unique_numbers.add(6)

# Using boolean values
is_python_fun = True
if is_python_fun and (5 > 3):
    print("Python is fun!")

# Working with file handling
with open("sample.txt", "w") as file:
    file.write("This is a test file.")

# Working with classes and objects
p1 = Person("Alice", 30)
print(p1.get_info())

# Using match-case (Python 3.10+ feature)
def check_status(code):
    match code:
        case 200:
            return "OK"
        case 404:
            return "Not Found"
        case 500:
            return "Server Error"
        case _:
            return "Unknown Status"

print(check_status(200))

# Asynchronous function
import asyncio

async def say_hello():
    await asyncio.sleep(1)
    print("Hello, async world!")

asyncio.run(say_hello())

# Working with decorators
def decorator(func):
    def wrapper():
        print("Function is being executed:")
        func()
    return wrapper

@decorator
def my_function():
    print("Hello from decorated function!")

my_function()

# Binary, Octal, Hexadecimal numbers
bin_num = 0b1101
oct_num = 0o755
hex_num = 0x1A3F

# Using assert statements
assert 2 + 2 == 4, "Math is broken!"

# List operations
numbers = [1, 2, 3, 4, 5]
numbers.append(6)
numbers.pop()

# Tuple operations
point = (10, 20)

# Using isinstance
if isinstance(point, tuple):
    print("point is a tuple")

# Using zip function
names = ["Alice", "Bob", "Charlie"]
ages = [25, 30, 35]
zipped_data = list(zip(names, ages))

# Using map function
nums = [1, 2, 3, 4]
doubled = list(map(lambda x: x * 2, nums))

# Working with while loop
x = 5
while x > 0:
    print("Counting down:", x)
    x -= 1

# Nested functions
def outer():
    def inner():
        print("Hello from inner function")
    inner()

outer()

# Using eval
expression = "5 + 10 * 2"
print("Result:", eval(expression))

# Using exec
exec("y = 10\nprint('y:', y)")

# Using enumerate
fruits = ["apple", "banana", "cherry"]
for index, fruit in enumerate(fruits):
    print(index, fruit)

# Working with nonlocal variable
def outer_func():
    count = 0
    def inner_func():
        nonlocal count
        count += 1
        print("Count:", count)
    inner_func()

outer_func()

# Using pass statement
def placeholder_function():
    pass

# Using global variable
global_var = 100
def modify_global():
    global global_var
    global_var += 1

modify_global()
print("Global variable:", global_var)

# List slicing
data = [0, 1, 2, 3, 4, 5]
print("Sliced data:", data[1:4])

# Using is and ==
a = [1, 2, 3]
b = a
print("a is b:", a is b)
print("a == b:", a == b)

# Using chr and ord
print("Char of 65:", chr(65))
print("ASCII of 'A':", ord('A'))

# Using itertools
import itertools
combinations = list(itertools.combinations([1, 2, 3], 2))
print("Combinations:", combinations)

# Using re module
import re
pattern = r"\d+"
match = re.search(pattern, "The number is 42")
if match:
    print("Found number:", match.group())

# Using time module
import time
print("Current time:", time.ctime())

# Using functools
import functools
@functools.lru_cache(maxsize=5)
def cached_function(n):
    return n * n

print("Cached value:", cached_function(5))

# Using defaultdict
from collections import defaultdict
dd = defaultdict(int)
dd["a"] += 1
print("Defaultdict:", dd)

# Using Counter
from collections import Counter
counter = Counter("hello world")
print("Counter:", counter)

# Using deque
from collections import deque
dq = deque([1, 2, 3])
dq.appendleft(0)
print("Deque:", dq)

# Using heapq
import heapq
heap = [3, 1, 4, 1, 5]
heapq.heapify(heap)
print("Heap:", heap)

# Using bisect
import bisect
sorted_list = [1, 2, 4, 5]
bisect.insort(sorted_list, 3)
print("Sorted list:", sorted_list)

# Using weakref
import weakref
class Sample:
    pass
obj = Sample()
weak = weakref.ref(obj)
print("Weak reference:", weak())

# Final print statement
print("Test file execution complete!")
