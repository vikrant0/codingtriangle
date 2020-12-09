//Create a class to find total marks in 4 main subjects with get_marks() and total_marks() member functions defined outside the class.

​

#include <iostream>

using namespace std;

class marks

{

private:

int maths,physics,chemistry,english;

public:

void get_marks();//member declaration inside the class

void total_marks();//member declaration inside the class

};

void marks :: get_marks()//member definition outside the class

{

cout<<"Enter your marks in Maths :";

cin>>maths;

cout<<"Enter your marks in Physics :";

cin>>physics;

cout<<"Enter your in Chemistry :";

cin>>chemistry;

cout<<"Enter your marks in English :";

cin>>english;

}

void marks :: total_marks()//member definition outside the class

{

cout<<"\nYour total marks is :"<<maths+physics+chemistry+english<<endl;

}

int main() {

marks obj;

obj.get_marks();

obj.total_marks();

return 0;

}
