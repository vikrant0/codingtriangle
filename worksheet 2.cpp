Q1. Differentiate between a pointer and a reference. 
​
--ANS --
 

Pointers

Used to store address of a variable

e.g.: int i=10;

               int * p =&i;

       p is the pointer

It has its own memory address

They can contain null values. e.g.: int * p= NULL;

 

Reference

it is another name for a variable declared before.

e.g.: int i;

               int &x=i;

       x is the reference

It has same memory address as that of the variable.

it cannot be assigned to null value.

 
Q2. What will be the output of the following program?
​
#include <iostream>

using namespace std;

int main()

{

int a = 32, *ptr = &a;

char ch = 'A', &cho = ch;

cho += a;

*ptr += ch;

cout << a << ", " << ch << endl;

return 0;

}

​
--ANS --
​
129, a

 
Q3. Write a program in C++ to find out the greatest and the smallest among three numbers using pointers.   
​
--ANS --
​​
#include <iostream>

using namespace std;

int main() {

int a,b,c;

cout<<"Enter 3 integers\n-> ";

cin>>a;

cout<<"-> ";

cin>>b;

cout<<"-> ";

cin>>c;

 

int *pa,*pb,*pc;

pa=&a;

pb=&b;

pc=&c;

int result = (*pa>*pb)?((*pa>*pc)?*pa:*pc):((*pb>*pc)?*pb:*pc);

cout<<"\nGreates no . : "<<result;

}

 
Q4. Write a program in C++ to reverse the digits of a number using pointers.
​
--ANS --
​
#include<iostream>

using namespace std;

​

int main() {

 

int n, digit , r = 0;

int *p;

cout << "Enter a number : ";

cin >> n;

p = &n;

while (*p> 0) {

digit = *p % 10;

r = r * 10 + digit;

*p = *p/ 10;

}

cout << "\nNew reversed number is : " << r;

return 0;

}

 
 
Q5.  “this pointer is used to refer current object”. Explain this statement by using an example. 
​
--ANS --
​
Consider an example:
Let an object a is calling its member function show(), like a.show().
Then, this pointer will store the address of that object inside the member function show();
​
#include <iostream>

using namespace std;

 

class abc{

  int num;

  public:

 

  void show(int x)

  {

    this->num=x;

    cout<<"The value of num : "<<num;

  }

};
 

int main() {  

  abc obj;

  obj.show(5);

}

​

OUTPUT: The value of num : 5

​
Q6.  What will be the output of the following program? 
 
#include<iostream>

using namespace std;

class Base

{

public:

virtual void show() { cout<<" In Base n"; }

};

class Derived: public Base

{

public:

void show() { cout<<"In Derived n"; }

};

int main(void)

{

Base *bp, b;

Derived d;

bp = &d;

bp->show();

bp = &b;

bp->show();

return 0;

}

 
--ANS --
​
In Derived n In Base n

 

Q7.  What is the necessity of virtual functions? Explain by using an example.
​
--ANS --
​
Virtual functions are used to achieve Runtime polymorphism.

Let's understand it with an example:

​

class A{

  public:

  void show(){

    cout<<"Hello World!";

  }

};

​

class B : public A{

  public:

  void show(){

    cout<<"Hello programmers!";

  }

};

​

You can see two functions with same name. One with base class A and other with derived class B.

Now by using virtual functions we can decide at program runtime that which function should run.

 
Q8. What will be the output of the following program?
 
#include<iostream>

using namespace std;

class Base

{

public:

virtual void show() = 0;

};

int main(void)

{

Base b;

Base *bp;

return 0;

}

​
--ANS --
Error: variable type 'Base' is an abstract class
Base b;
 
Q9.  How pure virtual function leads to abstract base class? Elaborate with example.
​
--ANS --
​
First let's understand the term Abstract base class
Abstract Base class - it is a class which has definition but not implementation.
​
e.g.: 
​
class A{
  int a;
  public:
  void show(){
    cin>>a;
    cout<<a;
  }
};
​
No object of class A exits to implement the function inside it. And therefore this class is an abstract class.
​
Pure virtual functions 
they don't have any implementation
they are only declared
made by assigning 0 to virtual functions
​
e.g.:
​
class A{
  public:
  virtual void show()=0;
};
​
class B : public A{
  public:
  void show(){
    cout<<"Hello World";
  }
};
​
int main(){
  B obj;
  obj.show();
}
