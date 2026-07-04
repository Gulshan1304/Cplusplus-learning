# Object-Oriented Programming (OOP) in C++

A complete, practical reference covering all core OOP concepts in C++ with code examples and explanations. Useful as study notes or a repo README for an OOP learning project.

---

## Table of Contents

1. [What is OOP?](#1-what-is-oop)
2. [Classes and Objects](#2-classes-and-objects)
3. [Access Specifiers](#3-access-specifiers)
4. [Constructors and Destructors](#4-constructors-and-destructors)
5. [Encapsulation](#5-encapsulation)
6. [Abstraction](#6-abstraction)
7. [Inheritance](#7-inheritance)
8. [Polymorphism](#8-polymorphism)
9. [Virtual Functions & Abstract Classes](#9-virtual-functions--abstract-classes)
10. [Operator Overloading](#10-operator-overloading)
11. [Static Members](#11-static-members)
12. [Friend Functions & Classes](#12-friend-functions--classes)
13. [Templates (Generic Programming)](#13-templates-generic-programming)
14. [The Four Pillars — Summary Table](#14-the-four-pillars--summary-table)
15. [Best Practices](#15-best-practices)

---

## 1. What is OOP?

**Object-Oriented Programming** is a paradigm based on the concept of **objects**, which bundle **data (attributes)** and **behavior (methods)** together. C++ supports OOP alongside procedural and generic programming.

Core pillars:
- **Encapsulation**
- **Abstraction**
- **Inheritance**
- **Polymorphism**

---

## 2. Classes and Objects

A **class** is a blueprint; an **object** is an instance of that blueprint.

```cpp
#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int speed;

    void drive() {
        cout << brand << " is driving at " << speed << " km/h\n";
    }
};

int main() {
    Car myCar;          // object
    myCar.brand = "Toyota";
    myCar.speed = 120;
    myCar.drive();
}
```

**Notes:**
- `class` members are `private` by default; `struct` members are `public` by default — that's the only structural difference between them in C++.
- Objects can be created on the stack (`Car c;`) or heap (`Car* c = new Car();`).

---

## 3. Access Specifiers

| Specifier   | Accessible from                                  |
|-------------|---------------------------------------------------|
| `public`    | Anywhere                                           |
| `private`   | Only within the same class                        |
| `protected` | Same class + derived classes                      |

```cpp
class Account {
private:
    double balance;   // hidden from outside

public:
    void deposit(double amt) { balance += amt; }
    double getBalance() { return balance; }
};
```

---

## 4. Constructors and Destructors

```cpp
class Person {
public:
    string name;

    // Default constructor
    Person() { name = "Unknown"; }

    // Parameterized constructor
    Person(string n) : name(n) {}

    // Copy constructor
    Person(const Person& other) { name = other.name; }

    // Destructor
    ~Person() { cout << name << " destroyed\n"; }
};
```

**Notes:**
- Constructors have the same name as the class, no return type.
- Destructors are prefixed with `~`, take no arguments, and cannot be overloaded.
- Use **initializer lists** (`: name(n)`) — more efficient than assigning in the constructor body.
- The **Rule of Three/Five**: if you define a destructor, copy constructor, or copy assignment operator, you likely need all of them (Five also includes move constructor & move assignment).

---

## 5. Encapsulation

Bundling data and methods, and restricting direct access to internal state.

```cpp
class BankAccount {
private:
    double balance = 0;

public:
    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    double getBalance() const {
        return balance;
    }
};
```

**Why it matters:** prevents invalid states (e.g., negative balance) by forcing access through controlled methods (getters/setters).

---

## 6. Abstraction

Hiding implementation details and exposing only essential features.

```cpp
class Shape {
public:
    virtual double area() const = 0;   // pure virtual = abstract
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override { return 3.14159 * radius * radius; }
};
```

**Notes:**
- Achieved via **abstract classes** and **interfaces** (classes with only pure virtual functions).
- The user of `Shape` doesn't need to know *how* `area()` is computed — only *that* it exists.

---

## 7. Inheritance

A class (**derived/child**) acquires properties of another (**base/parent**).

```cpp
class Animal {
public:
    void eat() { cout << "Eating...\n"; }
};

class Dog : public Animal {
public:
    void bark() { cout << "Barking...\n"; }
};

int main() {
    Dog d;
    d.eat();   // inherited
    d.bark();  // own method
}
```

**Types of inheritance:**

| Type          | Description                                |
|---------------|--------------------------------------------|
| Single        | One base, one derived                      |
| Multiple      | One derived, multiple bases                |
| Multilevel    | Chain: A → B → C                           |
| Hierarchical  | One base, multiple derived                 |
| Hybrid        | Combination of the above                   |

**Inheritance access modes:**

```cpp
class Derived : public Base { };     // public members stay public
class Derived : protected Base { };  // public members become protected
class Derived : private Base { };    // public members become private
```

---

## 8. Polymorphism

"Many forms" — the same interface behaves differently based on the object.

### Compile-time (Static) Polymorphism — Function/Operator Overloading

```cpp
class Print {
public:
    void show(int i)    { cout << "int: " << i << "\n"; }
    void show(double d) { cout << "double: " << d << "\n"; }
};
```

### Run-time (Dynamic) Polymorphism — Virtual Functions

```cpp
class Animal {
public:
    virtual void sound() { cout << "Some sound\n"; }
};

class Cat : public Animal {
public:
    void sound() override { cout << "Meow\n"; }
};

int main() {
    Animal* a = new Cat();
    a->sound();   // Output: Meow (resolved at runtime)
    delete a;
}
```

**Note:** Without `virtual`, C++ uses **static binding** and would call `Animal::sound()` instead — this is a common bug source.

---

## 9. Virtual Functions & Abstract Classes

```cpp
class Base {
public:
    virtual void greet() { cout << "Hello from Base\n"; }
    virtual ~Base() {}   // ALWAYS make base destructors virtual
};

class Derived : public Base {
public:
    void greet() override { cout << "Hello from Derived\n"; }
};
```

**Key rules:**
- Always declare the **base class destructor as `virtual`** if the class will be used polymorphically — otherwise `delete basePtr;` causes undefined behavior (derived destructor won't run).
- A class with **at least one pure virtual function** (`= 0`) is abstract and cannot be instantiated.
- `override` keyword (C++11+) helps catch signature mismatches at compile time.

---

## 10. Operator Overloading

```cpp
class Point {
public:
    int x, y;
    Point(int x, int y) : x(x), y(y) {}

    Point operator+(const Point& p) const {
        return Point(x + p.x, y + p.y);
    }

    friend ostream& operator<<(ostream& os, const Point& p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }
};

int main() {
    Point p1(1, 2), p2(3, 4);
    Point p3 = p1 + p2;
    cout << p3;   // (4, 6)
}
```

**Note:** Operators that **cannot** be overloaded: `::`, `.`, `.*`, `?:`, `sizeof`.

---

## 11. Static Members

Shared across **all objects** of a class, not tied to any single instance.

```cpp
class Counter {
public:
    static int count;
    Counter() { count++; }
};

int Counter::count = 0;   // must define outside the class

int main() {
    Counter a, b, c;
    cout << Counter::count;  // 3
}
```

---

## 12. Friend Functions & Classes

A `friend` can access private/protected members of a class, even though it isn't a member itself.

```cpp
class Box {
private:
    int width;
public:
    Box(int w) : width(w) {}
    friend void printWidth(const Box& b);
};

void printWidth(const Box& b) {
    cout << "Width: " << b.width << "\n";  // allowed
}
```

**Note:** Use sparingly — it breaks encapsulation and should be reserved for tightly coupled utility functions/operators (like `operator<<`).

---

## 13. Templates (Generic Programming)

Not strictly OOP, but essential companion for reusable, type-independent classes.

```cpp
template <typename T>
class Box {
    T value;
public:
    Box(T v) : value(v) {}
    T getValue() { return value; }
};

int main() {
    Box<int> intBox(5);
    Box<string> strBox("Hello");
}
```

---

## 14. The Four Pillars — Summary Table

| Pillar        | Purpose                                  | C++ Mechanism                          |
|---------------|-------------------------------------------|-----------------------------------------|
| Encapsulation | Protect internal state                   | `private`/`protected` + getters/setters |
| Abstraction   | Hide implementation, expose interface    | Abstract classes, pure virtual funcs    |
| Inheritance   | Reuse & extend behavior                  | `: public/protected/private Base`       |
| Polymorphism  | One interface, many behaviors            | `virtual` functions, overloading        |

---

## 15. Best Practices

- Prefer **composition over inheritance** when there's no true "is-a" relationship.
- Always mark base class destructors `virtual` if used polymorphically.
- Use `override` and `final` (C++11+) to make intent explicit and catch errors early.
- Keep classes focused (Single Responsibility Principle) — a class should do one thing well.
- Prefer `const` correctness (`const` methods, `const` references) to prevent unintended mutation.
- Avoid excessive use of `friend` and multiple inheritance — they increase coupling and complexity.
- Use smart pointers (`std::unique_ptr`, `std::shared_ptr`) instead of raw `new`/`delete` to avoid memory leaks in OOP hierarchies.

---

## License

Feel free to use these notes for learning, teaching, or as a repo reference. Attribution appreciated but not required.