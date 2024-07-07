In C++, input and output operations are commonly handled using streams provided by the standard library. The most frequently used streams are `cin` for input and `cout` for output, which are part of the `iostream` library. Here's an explanation of these operators along with examples:

### Input Operators:

- **`>>` (Extraction Operator)**:
  - The `>>` operator is used to take input from the standard input stream (`cin`). It extracts data from the input stream and stores it in the specified variable.

```cpp
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;  // Taking input from the user and storing it in the variable 'age'
    cout << "You entered: " << age << endl;
    return 0;
}
```

### Output Operators:

- **`<<` (Insertion Operator)**:
  - The `<<` operator is used to send output to the standard output stream (`cout`). It inserts the data into the output stream for display.

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 25;
    cout << "Your age is: " << age << endl;  // Displaying the value of 'age'
    return 0;
}
```

### Examples of Input and Output Operations:

#### Reading and Writing Different Data Types:

```cpp
#include <iostream>
using namespace std;

int main() {
    int integerValue;
    float floatValue;
    char charValue;
    string stringValue;

    // Input
    cout << "Enter an integer: ";
    cin >> integerValue;

    cout << "Enter a floating-point number: ";
    cin >> floatValue;

    cout << "Enter a character: ";
    cin >> charValue;

    cout << "Enter a string: ";
    cin >> stringValue;

    // Output
    cout << "You entered integer: " << integerValue << endl;
    cout << "You entered float: " << floatValue << endl;
    cout << "You entered character: " << charValue << endl;
    cout << "You entered string: " << stringValue << endl;

    return 0;
}
```

#### Handling Multiple Inputs in One Line:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers separated by space: ";
    cin >> a >> b;  // Taking multiple inputs in one line
    cout << "You entered: " << a << " and " << b << endl;
    return 0;
}
```

#### Using `getline` for String Input:

The `cin` operator stops reading input at the first whitespace character, which can be problematic when dealing with multi-word strings. To handle this, `getline` is used.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);  // Using getline to read a line of text including spaces
    cout << "Hello, " << fullName << "!" << endl;
    return 0;
}
```
### Cout

`cout` is a predefined object in C++ that stands for "character output." It is part of the `iostream` library and is used to output data to the standard output stream, typically the console. The `cout` object is an instance of the `ostream` class, which is designed to handle output operations.

### Key Features of `cout`:

1. **Standard Output Stream**:
   - `cout` directs the output to the standard output device, which is usually the computer screen.

2. **Insertion Operator (`<<`)**:
   - The `<<` operator, known as the insertion operator, is used with `cout` to send data to the output stream. It can be used to output various types of data, such as integers, floating-point numbers, characters, and strings.

3. **Chaining**:
   - Multiple insertion operations can be chained together in a single statement. This makes it convenient to output multiple pieces of data in one line of code.

### Example Usage of `cout`:

#### Basic Output:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;  // Outputs the string "Hello, World!" followed by a newline
    return 0;
}
```

#### Outputting Variables:

```cpp
#include <iostream>
using namespace std;

int main() {
    int age = 25;
    double height = 5.9;
    char initial = 'A';

    cout << "Age: " << age << endl;         // Outputs: Age: 25
    cout << "Height: " << height << endl;   // Outputs: Height: 5.9
    cout << "Initial: " << initial << endl; // Outputs: Initial: A

    return 0;
}
```

#### Chaining Output Statements:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    cout << "a: " << a << ", b: " << b << endl;  // Outputs: a: 10, b: 20
    return 0;
}
```

### Special Characters and Manipulators:

- **`endl`**: Inserts a newline character and flushes the stream.
- **`\n`**: Inserts a newline character without flushing the stream.
- **`setw`**, **`setprecision`**, **`fixed`**, etc.: Various manipulators from the `<iomanip>` library to format the output.

#### Example with Manipulators:

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double number = 123.456789;

    cout << "Default: " << number << endl;
    cout << "Fixed: " << fixed << setprecision(2) << number << endl;
    cout << "Scientific: " << scientific << number << endl;

    return 0;
}
```
