# CLASS:-


Class is bindinig of ddata and its asocited function together.Class is a group of objects that share common properties and relationships .In C++, a class is
a new data type that contains member variables and member functions that operates on the variables.A class is defined with the keyword class. It allows the data to be 
hidden, if necessary from externaluse. When we defining a class, we are creating a new abstract data type that can be treated like any other built in data type.
Generally a class specification has two parts:-
 a) Class declaration
 b) Class function definition
the class declaration describes the type and scope of its members. The class function definition describes how the class functions are implemented.

 #Syntax:-
 
 class class-name
{
private:
variable declarations;
function declaration ;
public:
variable declarations;
function declaration;
};

The members that have been declared as private can be accessed only from with in the class. On the other hand , public members can be accessed from outside the class
also. The data hiding is the key feature of oops. The use of keywords private is optional by default, the members of a class are private.
The variables declared inside the class are known as data members and the functions are known as members mid the functions. Only the member functions can have access to
the private data members and private functions. However, the public members can be accessed from the outside the class. The binding of data and functions together
into a single class type variable is referred to as
encapsulation.

#Syntax:-

class item
{
int member;
float cost;
public:
void getldata (int a ,float b);
void putdata (void);
]
The class item contains two data members and two function members, the data
members are private by default while both the functions are public by declaration. The function
getdata() can be used to assign values to the member variables member and cost, and putdata() for
displaying their values . These functions provide the only access to the data members from outside
the class. 

#CREATING OBJECTS:

Once a class has been declared we can create variables of that type
by using the class name.
Example:
item x;
creates a variables x of type item. In C++, the class variables are known as objects. Therefore
x is called an object of type item.
item x, y ,z also possible.
class item
{
-----------
-----------
-----------
}x ,y ,z;
would create the objects x ,y ,z of type item.

#ACCESSING CLASS MEMBER:

The private data of a class can be accessed only through the member functions of that
class. The main() cannot contains statements that the access number and cost directly.
#Syntax:
object name.function-name(actual arguments);
Example:- x. getdata(100,75.5);
It assigns value 100 to number, and 75.5 to cost of the object x by
implementing the getdata() function .
similarly the statement
x. putdata ( ); //would display the values of data members.
x. number = 100 is illegal .Although x is an object of the type item to which number belongs ,
the number can be accessed only through a member function and not by the object directly.
Example:
class xyz
{
Int x;
Int y;
public:
int z;
};
---------
----------
xyz p;
p. x =0; error . x is private
p, z=10; ok ,z is public
38 P.T.O

#DEFINING MEMBER FUNCTION:

Member can be defined in two places
• Outside the class definition
• Inside the class function

#OUTSIDE THE CLASS DEFlNAT1ON

Member function that are declared inside a class have to be defined separately
outside the class.Their definition are very much like the normal functions.
An important difference between a member function and a normal
function is that a member function incorporates a membership.Identify label in the header. The
‘label’ tells the compiler which class the function belongs to.

#Syntax:

return type class-name::function-name(argument declaration )
{
function-body
}
The member ship label class-name :: tells the compiler that the function function -
name belongs to the class class-name . That is the scope of the function is restricted to the classname specified in the header line. The :: symbol is called scope resolution operator.
Example:
void item :: getdata (int a , float b )
{
number=a;
cost=b;
}
void item :: putdata ( void)
{
cout<<”number=:”<<number<<endl;
cout<<”cost=”<<cost<<endl;
}
The member function have some special characteristics that are often used in the program
development.
• Several different classes can use the same function name. The "membership label"
will resolve their scope, member functions can access the private data of the class
.A non member function can't do so.
• A member function can call another member function directly, without using the dot
operator.

#INSIDE THE CLASS DEF1NATION:

Another method of defining a member function is to replace the function declaration by the
actual function definition inside the class .
Example:
class item
{
Intnumber;
float cost;
public:
void getdata (int a ,float b);
void putdata(void)
{
cout<<number<<endl; cout<<cost<<endl;
}
}; 
