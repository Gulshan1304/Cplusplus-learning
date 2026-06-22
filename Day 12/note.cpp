# Function Overloading, Scope, and Recursion

## 1. Function Overloading
function Overloading is a feature in C++ that allows multiple functions to have the same name but different parameter lists (different number, type, or order of parameters).

It is an example of Compile-Time Polymorphism.
### Types of Function Overloading
## a. Different Number of Parameters
  void add(int a);
  void add(int a, int b);

## b. Different Data Types
  void show(int x);
  void show(double x);

## c. Different Order of Parameters
  void display(int a, double b);
  void display(double a, int b);

  ## Uses of Function Overloading
1. Improves code readability.
2. Allows the same function name for similar operations.
3. Reduces the need to remember multiple function names.
4. Makes programs easier to maintain.


## 2. Scope
Scope refers to the region of a program where a variable, function, or object can be accessed.

It determines the visibility and lifetime of identifiers.
### Types of Scope
1. Local Scope - A variable declared inside a function or block
2. Global Scope - A variable declared outside all functions.
3. Block Scope - A variable declared inside { } such as if, for, while.
4. Function Scope - Labels used with goto statements have function scope.
5. Class Scope - Variables and methods declared inside a class.

## Scope Resolution Operator (::)
The scope resolution operator is used to access a global variable when a local variable has the same name.


## 3. Recursion
Recursion is a process in which a function calls itself directly or indirectly until a specified condition is met.
### Types of Recursion
1. Direct Recursion

A function calls itself directly.
void fun() {
    fun();
}


2. Indirect Recursion

One function calls another function which eventually calls the first function.
/*void A();
void B();

void A() {
    B();
}*/

void B() {
    A();
}

3. Tail Recursion

Recursive call is the last statement of the function
void print(int n) {
    if(n == 0)
        return;

    cout << n;
    print(n - 1);
}
4. Head Recursion

Recursive call occurs before any processing.
void print(int n) {
    if(n == 0)
        return;

    print(n - 1);
    cout << n;
}

5. Tree Recursion

A function makes more than one recursive call
void fun(int n) {
    if(n > 0) {
        fun(n - 1);
        fun(n - 1);
    }
}

6. Nested Recursion

A recursive call is passed as an argument to another recursive call.
int fun(int n) {
    if(n > 100)
        return n - 10;

    return fun(fun(n + 11));
}