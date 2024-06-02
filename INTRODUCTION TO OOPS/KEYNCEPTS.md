## Introduction to Object-Oriented Programming (OOP) in C++

Object-Oriented Programming (OOP) is a programming paradigm that uses "objects" to design applications and computer programs. It utilizes several principles such as encapsulation, inheritance, polymorphism, and abstraction to create modular and reusable code.

### Key Concepts of OOP

1. **Classes and Objects**
2. **Encapsulation**
3. **Inheritance**
4. **Polymorphism**
5. **Abstraction**

### 1. Classes and Objects

- **Class**: A blueprint for creating objects (a particular data structure), providing initial values for state (member variables) and implementations of behavior (member functions or methods).

- **Object**: An instance of a class. When a class is defined, no memory is allocated until an object of that class is created.

#### Example:

```cpp
#include <iostream>
using namespace std;

// Define a class
class Car {
public:
    string brand;
    string model;
    int year;

    // Method (function) inside the class
    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    // Create an object of Car
    Car car1;
    car1.brand = "Toyota";
    car1.model = "Corolla";
    car1.year = 2020;

    // Access method
    car1.displayInfo();

    return 0;
}
```

### 2. Encapsulation

Encapsulation is the mechanism of restricting access to some of the object's components. This means that the internal representation of an object can't be seen from outside of the object's definition.

#### Example:

```cpp
#include <iostream>
using namespace std;

class Employee {
private:
    int salary;

public:
    // Setter
    void setSalary(int s) {
        salary = s;
    }

    // Getter
    int getSalary() {
        return salary;
    }
};

int main() {
    Employee emp;
    emp.setSalary(50000);
    cout << "Employee Salary: " << emp.getSalary() << endl;

    return 0;
}
```

### 3. Inheritance

Inheritance is a way to form new classes using classes that have already been defined. It helps in reusability and establishes a relationship between the child class and parent class.

#### Example:

```cpp
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal is eating." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog is barking." << endl;
    }
};

int main() {
    Dog dog1;
    dog1.eat();  // Inherited from Animal
    dog1.bark();

    return 0;
}
```

### 4. Polymorphism

Polymorphism means "many forms". It allows one interface to be used for a general class of actions. The specific action is determined by the exact nature of the situation.

#### Example:

```cpp
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void sound() {
        cout << "This is an animal sound." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void sound() override {
        cout << "The dog barks." << endl;
    }
};

// Derived class
class Cat : public Animal {
public:
    void sound() override {
        cout << "The cat meows." << endl;
    }
};

int main() {
    Animal* animal;
    Dog dog1;
    Cat cat1;

    animal = &dog1;
    animal->sound();

    animal = &cat1;
    animal->sound();

    return 0;
}
```

### 5. Abstraction

Abstraction means hiding the complex implementation details and showing only the essential features of the object. It helps in reducing programming complexity and effort.

#### Example:

```cpp
#include <iostream>
using namespace std;

class AbstractDevice {
public:
    virtual void turnOn() = 0; // Pure virtual function
    virtual void turnOff() = 0; // Pure virtual function
};

class Fan : public AbstractDevice {
public:
    void turnOn() override {
        cout << "Fan is now ON." << endl;
    }
    void turnOff() override {
        cout << "Fan is now OFF." << endl;
    }
};

int main() {
    Fan myFan;
    myFan.turnOn();
    myFan.turnOff();

    return 0;
}
```

In this example, `AbstractDevice` is an abstract class because it contains pure virtual functions. Any class that inherits from `AbstractDevice` must implement `turnOn()` and `turnOff()`.

## Conclusion

Object-Oriented Programming in C++ provides a powerful framework for building complex and scalable software. By understanding and using classes, encapsulation, inheritance, polymorphism, and abstraction, you can create modular, reusable, and maintainable code.

Explore more examples and deepen your understanding of OOP concepts by experimenting with the provided code and creating your own classes and objects. Happy coding!
