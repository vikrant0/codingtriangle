#include <iostream>

using namespace std;

class initialize{

 public:

 int a;

 initialize(int num){ //it is a parameterized contructor

   a=num;

 }

};

int main() {

initialize obj(10); //creating an object to call parameterized constructor

cout<<"The value of a : "<<obj.a;

}
