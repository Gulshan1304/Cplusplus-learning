#  What is Input in C++?
Input means taking data from the user.

In C++, we use `cin` to take input.

`cin` stands for:

> Character Input

---

# 📌 Example

#include <iostream>
using namespace std;

int main() {

    int age;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Your age is: " << age;

    return 0;
}
```

---

# ▶️ Output

Enter your age: 18
Your age is: 18
```

---

# 📌 Explanation

```cpp id="v0x1rl"
cin >> age;
```

* `cin` → takes input from user
* `>>` → input operator
* `age` → variable where value is stored

---

# 📌 Real Life Example

When Instagram asks for:

* Username
* Password

That is also called **Input** because user enters data.

---

# 🏆 Summary

✅ Input means taking data from user
✅ `cin` is used for input in C++
✅ Data gets stored inside variables
