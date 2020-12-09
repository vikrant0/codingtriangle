//creating array of objects


//ARRAY OF OBJECTS
//Why to create array of objects?
//We create array of objects so that we can make our program simple. By creating array of objects, there is no need to call class member functions every time individually when we create a new object. See the below example to understand the concept:

class objarray{
  public:
  int a;
  void get_val(){
    cout<<"Enter a : ";
    cin>>a;
  }
  void put_val(){
    cout>>"a : "<<a;
  }
};

int main(){
objarray obj1,obj2,obj3;

obj1.get_val();
obj1.put_val();

obj2.get_val();
obj2.put_val();

obj3.get_val();
obj3.put_val();

}
