# Memory Management
Memory management in C++ is the process of allocating and deallocating memory during program execution. C++ gives programmers direct control over memory, which provides high performance but also requires careful handling.

# 1. Types of Memory

A. Stack Memory
-> Automatically managed by the compiler.
-> Stores local variables and function call information.
-> Memory is allocated when a function is called and released when it returns.
```
void func() {
    int x = 10;  // Stored on stack
}
```
B. Heap Memory (Dynamic Memory)
->Allocated manually during runtime.
->Used when the size or lifetime of data is unknown at compile time.
```
int * ptr = new int(10);  // Allocate memory
delete ptr;              // Free memory

```
# 2.2. Memory Leak

Occurs when allocated memory is never released.
```
void leak() {
    int* ptr = new int(100);
    // delete ptr; missing
}
```

Every call allocates memory that cannot be reclaimed until the program ends.

# 3. Dangling Pointer

A pointer that refers to memory that has already been freed.
```
int* ptr = new int(5);

delete ptr;

ptr = nullptr;  // Good practice
```
Without setting to nullptr, ptr becomes a dangling pointer.