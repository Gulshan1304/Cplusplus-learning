# STANDARD TEMPLATE LIBRARY (STL)


## 1. What is STL?
The Standard Template Library (STL) is a collection of generic classes and functions in C++ that provides ready-made data structures and algorithms, making programming easier and more efficient.

## 2. What is a Container?

A container is a data structure used to store and organize a collection of elements.

Examples:
```
vector
list
deque
set
map
unordered_map
```
## 3. What is an Algorithm?

An algorithm is a predefined function that performs operations on data stored in containers.
Examples:
```
sort()
reverse()
find()
count()
binary_search()
```
## 4. What is an Iterator?

An iterator is an object that acts like a pointer and is used to access and traverse elements of a container.

## 5. What is a Vector?

A vector is a dynamic array that can automatically grow or shrink in size as elements are added or removed.

## 6. What is a List?

A list is a doubly linked list that allows efficient insertion and deletion of elements from any position.

## 7. What is a Deque?

A deque (double-ended queue) is a sequence container that allows insertion and deletion at both the front and the back efficiently.

## 8. What is a Stack?

A stack is a container adapter that follows the LIFO (Last In, First Out) principle.

Example:

Push: 10, 20, 30
Pop: 30
## 9. What is a Queue?
A queue is a container adapter that follows the FIFO (First In, First Out) principle.

Example:
```
Push: 10, 20, 30
Pop: 10
```

## 10. What is a Priority Queue?

A priority queue is a container adapter in which the element with the highest (or lowest) priority is removed first.

## 11. What is a Set?

A set is an associative container that stores unique elements in sorted order.

## 12. What is a Multiset?

A multiset is similar to a set, but it allows duplicate elements while keeping them sorted.

## 13. What is a Map?

A map is an associative container that stores key-value pairs with unique keys in sorted order.

## 14. What is a Multimap?

A multimap is an associative container that stores key-value pairs and allows duplicate keys.

## 15. What is an Unordered Map?

An unordered_map is a hash table-based associative container that stores key-value pairs in no specific order and provides average O(1) lookup time.

## 16. What is an Unordered Set?

An unordered_set is a hash table-based container that stores unique elements without any order.

## 17. What is a Pair?

A pair is a template class that stores two values of possibly different data types.

Example:
```
pair<int, string> p = {1, "Alice"};
```
## 18. What is a Functor?

A functor (function object) is a class that overloads the () operator so that its objects can be called like functions.

## 19. What is a Lambda Expression?

A lambda expression is an anonymous function used for writing short pieces of code, especially with STL algorithms.

Example:
```
sort(v.begin(), v.end(), [](int a, int b) {
    return a > b;
});
```
## 20. What is a Template?

A template is a C++ feature that allows writing generic code that works with different data types without rewriting the same logic.

## 21. What is Generic Programming?

Generic programming is a programming technique where algorithms and data structures are written to work with any data type using templates.

## 22. What is a Container Adapter?

A container adapter is a special container that provides a restricted interface by adapting an existing container.

Examples:
```
stack
queue
priority_queue
```
## 23. What is Hashing?

Hashing is a technique that converts a key into an index using a hash function, enabling fast insertion, deletion, and searching.

## 24. What is Time Complexity?

Time complexity measures how the running time of an algorithm grows as the input size increases.
```
Example:

O(1) – Constant time
O(log n) – Logarithmic time
O(n) – Linear time
O(n log n) – Linearithmic time
O(n²) – Quadratic time
```