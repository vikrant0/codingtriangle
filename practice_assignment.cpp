Q1. What are the advantages of dynamic memory allocation over the compile time memory allocation?
​
--ANS --
​
DYNAMIC MEMORY ALLOCATION 
- In DMA, memory is allotted at execution time.
- After using the memory it can be deleted.
- Memory is allotted dynamically to variables through the use of pointers.
​
COMPILE TIME MEMORY ALLOCATION 
- Memory is allotted at compile time.
- After using the memory it cannot be deleted.
- Memory is allotted without use of pointers.
 
Q2. What are the differences between malloc() and new?
​
--ANS --
​
Malloc()

It is used as a function in c programming

need to do type conversion.

return void type of pointer.

 

New

It is used as a operator in c++ programming.

type conversion is not required

return concerned type of pointer. e.g.: int pointer for int variables

 
Q3. What are the advantages and disadvantages of using pointers?​
​
--ANS --
​
Advantages

memory can be accessed directly

reduces space for storage

stores address of variables which can also be used to modify values.

 

Disadvantages

uninitialized pointers can cause trouble to the program.

Works very slow as compared to variables.

Difficult to find bugs in program caused by pointers

 
Q4. Write a program to dynamically allocate memory to integer, float, and character type of data. Initialise the value of float during the compile time, and the value of integer and character must be entered during the execution time.
​
--ANS --
​
#include <iostream>

using namespace std;

int main() {

int * i = new int;

float * f = new float(10.9);

char * c= new char;

cout<<"Enter the vaulue of interger : ";

cin>>*i;

cout<<"\nEnter the value of character : ";

cin>>*c;

cout<<"\nInteger : "<<*i;

cout<<"\nFloat : "<<*f;

cout<<"\nCharacter : "<<*c;

delete i;

delete f;

delete c;

}

 
Q5. Write a program to store name, UID, and marks in 5 subjects for n number of students using the concept of classes and dynamic memory allocation. (allocate memory to n number of objects using new and delete the same using delete [])
​
--ANS --
​

#include <iostream>

using namespace std;

class student{

char name[20],uid[9];

float marks[5],total;

public:

 

void getdata()

{

cout<<"Enter name : ";

cin>>name;

cout<<"Enter UID : ";

cin>>uid;

cout<<"Enter marks in 5 subjects \n";

for(int i=0;i<5;i++)

{

cout<<"-> ";

cin>>marks[i];

}

}

 

void showdata()

{

cout<<"\nName : "<<name;

cout<<"\nUID : "<<uid;

for(int i=0;i<5;i++)

{

total+=marks[i];

}

cout<<"\nTotal marks : "<<total;

}

};

int main() {

student * p=new student[5];

for(int i=0;i<5;i++)

{

p[i].getdata();

}

for(int i=0;i<5;i++)

{

p[i].showdata();

}

}

