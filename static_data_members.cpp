#include <iostream>

using namespace std;

 

class test{

public:

int a;

void getval(){

cout<<"Enter the value of A : ";

cin>>a;

}

int putval(){

return a;

}

};

int main() {

test obj1,obj2,obj3; // created 3 objects to get the value of a

obj1.getval();

obj2.getval();

obj3.getval();

 

cout<<"Value of a when called by obj1 : "<<obj1.putval();

cout<<"\nValue of a when called by obj2 : "<<obj2.putval();

cout<<"\nValue of a when called by obj3 : "<<obj3.putval();

 

}
