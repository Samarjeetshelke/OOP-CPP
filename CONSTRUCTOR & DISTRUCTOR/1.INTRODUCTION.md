# constructor:-

A constructor is a member function of a class that has the same name as the class name. They do not have any return type even a void .It helps to initialize the object of a class. It can either accept the arguments or not. 
It is used to allocate the memory to an object of the class. It is called whenever an instance of the class is created. It can be defined manually with arguments or without arguments. There can be many constructors in class. It can be overloaded but it can not be inherited or virtual. There is a concept of copy constructor which is used to initialize a object from another object. 

---

# Syntax:-
 

  ClassName()
   {
     //Constructor's Body 
   } 

There are three types of consructor:-
1. Default Constructors:- 
                Default constructor is the constructor which doesn’t take any argument. It has no parameters.
                Code:-
               
               
 // concept of Constructors
#include <iostream>
using namespace std;
 
class construct
{
public:
    int a, b;
 
    // Default Constructor
    construct()
    {
        a = 10;
        b = 20;
    }
};
 
int main()
{
    // Default constructor called automatically
    // when the object is created
    construct c;
    cout << "a: " << c.a << endl
         << "b: " << c.b;
    return 1;
}
  
  ---
  
 2. Parameterized Constructors: It is possible to pass arguments to constructors. Typically, these arguments help initialize an object when it is created. To create a parameterized constructor, simply add parameters to it the way you would to any other function. When you define the constructor’s body, use the parameters to initialize the object. 



// parameterized constructors
#include <iostream>
using namespace std;
 
class Point
{
private:
    int x, y;
 
public:
    // Parameterized Constructor
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
 
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};
 
int main()
{
    // Constructor called
    Point p1(10, 15);
 
    // Access values assigned by constructor
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
 
    return 0;
}
  
  ---
  
  3. Copy Constructor: A copy constructor is a member function which initializes an object using another object of the same class.

Whenever we define one or more non-default constructors( with parameters ) for a class, a default constructor( without parameters ) should also be explicitly defined as the compiler will not provide a default constructor in this case. However, it is not necessary but it’s considered to be the best practice to always define a default constructor. 


// Illustration
#include "iostream"
using namespace std;
 
class point
{
private:
  double x, y;
 
public:
   
  // Non-default Constructor &
  // default Constructor
  point (double px, double py)
  {
    x = px, y = py;
  }
};
 
int main(void)
{
 
  // Define an array of size
  // 10 & of type point
  // This line will cause error
  point a[10];
 
  // Remove above line and program
  // will compile without error
  point b = point(5, 6);
}
 
