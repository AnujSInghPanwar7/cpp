#include<iostream>

using namespace std;
class complex{
    int a,b;
    public:
    // Creating a constructor
    // Constructor is a special member function with samae name as of the class.
    // It is used to intialize the objects of its class.
    // It is automatically invoked when an object is created.
    complex(void);//Constructor declaration
    void printnumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex::complex(void)//-----> This is default constructor as it takes no parameters
{
    a = 10;
    b = 0;
}
int main(){
    complex c1;
    c1.printnumber();
    return 0;
}



//Characteristics of constructors:
// 1. It should be declared in the publi section of class.
// 2. They are automatically invoked when an object is created.
// 3. They cannot return values and do not have return types.
// 4. It can have default arguments.
// 5. We cannot refer to their address.