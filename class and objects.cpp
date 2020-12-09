Write a program to add two static data members in a static member functions.



#include <iostream>
using namespace std;
class sum{
static int a,b;
public:
static void calc(){
cin>>a>>b;
cout<<"The Sum is : "<<a+b;
}
};
int sum :: a=10;
int sum:: b=10;
int main() {
sum obj;
obj.calc();
}
