//an example to define a member function outside the class.
​
//Example : 
​
class A{
  public: 
  void hello(); // here comes the function declaration
  }
}
​
// definition of member function outside the class
​
void A :: hello()
{
  cout<<"hello world";
}
​

//an example to define a member function inside the class

class A{
  public: 
  void hello(){
   cout<<"hello world";
  }
}
