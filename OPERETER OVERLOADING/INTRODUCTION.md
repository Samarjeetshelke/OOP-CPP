Operator overloading in C++ allows you to redefine the way operators work with user-defined types, such as classes and structures. It enables you to use operators like `+`, `-`, `*`, `/`, etc., with your custom types, making your code more expressive and readable. Here's how you can overload operators:

### Syntax:

```cpp
return-type operator op(parameters) {
    // Code to define the behavior of the operator
}
```

Where `op` is the operator you want to overload, and `return-type` is the type of value returned by the operator.

### Example: Overloading the `+` Operator

```cpp
#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    Complex(int r = 0, int i = 0) : real(r), imaginary(i) {}

    // Overloading the + operator to add two Complex objects
    Complex operator+(const Complex& other) {
        Complex temp;
        temp.real = real + other.real;
        temp.imaginary = imaginary + other.imaginary;
        return temp;
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1(2, 3);
    Complex c2(4, 5);
    Complex sum = c1 + c2;
    sum.display();
    return 0;
}
```

### Common Operator Overloading Examples:

1. **Arithmetic Operators**: `+`, `-`, `*`, `/`, `%`
2. **Comparison Operators**: `==`, `!=`, `>`, `<`, `>=`, `<=`
3. **Unary Operators**: `++`, `--`, `!`, `-`
4. **Assignment Operators**: `=`, `+=`, `-=`, `*=`, `/=`, `%=`
5. **Stream Operators**: `<<` (output), `>>` (input)

### Rules for Operator Overloading:

1. You cannot create new operators or change the precedence of existing operators.
2. Overloaded operators must have at least one operand of a user-defined type.
3. Most operators can be overloaded as member functions or global functions.

### Overloading as Member vs. Non-Member Functions:

- **Member Function**: If you overload an operator as a member function, the left operand will be the calling object.
- **Non-Member Function**: If you overload an operator as a non-member function, both operands must be explicitly passed.

### Example: Overloading the `<<` Operator (Non-Member Function)

```cpp
#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    friend ostream& operator<<(ostream& out, const Point& point);
};

ostream& operator<<(ostream& out, const Point& point) {
    out << "(" << point.x << ", " << point.y << ")";
    return out;
}

int main() {
    Point p(10, 20);
    cout << p;
    return 0;
}
```

### Advantages of Operator Overloading:

1. Makes code more readable and expressive.
2. Enables you to use operators with user-defined types, making the code more natural.
3. Allows you to define operators in a way that is meaningful for your custom types.

### Limitations of Operator Overloading:

1. Can lead to confusion if not used carefully, especially when the overloaded operators have different meanings from their usual ones.
2. Should be used judiciously to avoid code that is difficult to understand or maintain.

Operator overloading is a powerful feature of C++ that can be used to write concise and expressive code. However, it should be used with care to ensure that the code remains readable and maintainable.
