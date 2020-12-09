//simple program

#include <iostream>

using namespace std;

class test{

public:

int a, b;

};

int main() {

test obj;

cout<<"The value of a is : "<<obj.a;

cout<<"\nThe value of b is : "<<obj.b;

}


//default constructor

#include <iostream>

using namespace std;

class test{

public:

int a, b;

test(){  //created a default constructor

 a=10;

 b=20;

}

};

int main() {

test obj; //default constructor will be called

cout<<"The value of a is : "<<obj.a;

cout<<"\nThe value of b is : "<<obj.b;

}
