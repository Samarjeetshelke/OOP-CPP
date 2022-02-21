# CLASS:-


Class is bindinig of ddata and its asocited function together.Class is a group of objects that share common properties and relationships .In C++, a class is
a new data type that contains member variables and member functions that operates on the variables.A class is defined with the keyword class. It allows the data to be 
hidden, if necessary from externaluse. When we defining a class, we are creating a new abstract data type that can be treated like any other built in data type.
Generally a class specification has two parts:-<br>
 a) Class declaration<br>
 b) Class function definition<br>
the class declaration describes the type and scope of its members. The class function definition describes how the class functions are implemented.<br>
<br>
 #Syntax:-                                  <br>
                                            <br>
 class class-name<br>
{                                           <br>
private:                                    <br>
variable declarations;                      <br>
function declaration ;                      <br>
public:                                     <br>
variable declarations;                      <br>
function declaration;                       <br>
};                                          <br>

The members that have been declared as private can be accessed only from with in the class. On the other hand , public members can be accessed from outside the class   <br>
also. The data hiding is the key feature of oops. The use of keywords private is optional by default, the members of a class are private.                               <br>
The variables declared inside the class are known as data members and the functions are known as members mid the functions. Only the member functions can have access to<br>
the private data members and private functions. However, the public members can be accessed from the outside the class. The binding of data and functions together         <br>
into a single class type variable is referred to as<br>
encapsulation.<br>
<br>
#Syntax:-
<br>
class item<br>
{                                       <br>
int member;                             <br>
float cost;                              <br>
public:                                 <br>
void getldata (int a ,float b);         <br>
void putdata (void);                    <br>
};                                       <br>
The class item contains two data members and two function members, the data<br>
members are private by default while both the functions are public by declaration. The function<br>
getdata() can be used to assign values to the member variables member and cost, and putdata() for<br>
displaying their values . These functions provide the only access to the data members from outside<br>
the class. <br>
<br>
<br>
#CREATING OBJECTS:<br>
<br>
Once a class has been declared we can create variables of that type<br>
by using the class name.<br>
Example:<br>
item x;<br>
creates a variables x of type item. In C++, the class variables are known as objects. Therefore<br>
x is called an object of type item.<br>
item x, y ,z also possible.<br>
class item<br>
{<br>
<br>
<br>
<br>
}x ,y ,z;<br>
would create the objects x ,y ,z of type item.<br>
<br>
<br>
#ACCESSING CLASS MEMBER:<br>
<br>

The private data of a class can be accessed only through the member functions of that<br>
class. The main() cannot contains statements that the access number and cost directly.<br>
#Syntax:<br>
<br>
object name.function-name(actual arguments);<br>
<br>
Example:- x. getdata(100,75.5);<br>
<br>
It assigns value 100 to number, and 75.5 to cost of the object x by<br>
implementing the getdata() function .<br>
similarly the statement<br>
x. putdata ( ); //would display the values of data members.<br>
x. number = 100 is illegal .Although x is an object of the type item to which number belongs ,<br>
the number can be accessed only through a member function and not by the object directly.<br>
Example:<br>
class xyz               <br>
{                      <br>
Int x;                  <br>
Int y;                  <br>
public:                 <br>
int z;                  <br>
};                      <br>
<br>

----------

xyz p;<br>
p. x =0; error . x is private<br>
p, z=10; ok ,z is public<br>
38 P.T.O<br>
<br>
<br>
#DEFINING MEMBER FUNCTION:<br>
<br>
Member can be defined in two places<br>
• Outside the class definition<br>
• Inside the class function<br>
<br>
<br>

#OUTSIDE THE CLASS DEFlNAT1ON<br>
<br>
Member function that are declared inside a class have to be defined separately<br>
outside the class.Their definition are very much like the normal functions.<br>
An important difference between a member function and a normal<br>
function is that a member function incorporates a membership.Identify label in the header. The<br>
‘label’ tells the compiler which class the function belongs to.<br>
<br>
#Syntax:<br>
<br>
return type class-name::function-name(argument declaration )<br>
{<br>
function-body<br>
}<br>
The member ship label class-name :: tells the compiler that the function function -<br>
name belongs to the class class-name . That is the scope of the function is restricted to the classname specified in the header line. The :: symbol is called scope resolution operator.<br>
Example:<br>
void item :: getdata (int a , float b )<br>
{<br>
number=a;<br>
cost=b;<br>
}<br>
void item :: putdata ( void)<br>
{<br>
cout<<”number=:”<<number<<endl;<br>
cout<<”cost=”<<cost<<endl;<br>
}<br>
The member function have some special characteristics that are often used in the program
development.<br>
• Several different classes can use the same function name. The "membership label"
will resolve their scope, member functions can access the private data of the class
.A non member function can't do so.<br>
• A member function can call another member function directly, without using the dot
operator.<br>
<br>

#INSIDE THE CLASS DEF1NATION:<br>

Another method of defining a member function is to replace the function declaration by the
actual function definition inside the class .
Example:<br>
class item<br>
{<br>
Intnumber;<br>
float cost;<br>
public:<br>
void getdata (int a ,float b);<br>
void putdata(void)<br>
{<br>
cout<<number<<endl; cout<<cost<<endl;<br>
}<br>
}; <br>
<br>
