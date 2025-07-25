#include<iostream>

using namespace std;
class number{
    int a;

    public:

    number(){
        a = 0;
    }

    number(int num){
        a = num;
    }

    // When no copy constructor is found the compiler provides a default copy condtructor  
    number(number &obj){
        a = obj.a;
        cout<<"Copy constructor called "<<endl;
    }

    void display(){
        cout<<"The number is "<<a<<endl;
    }
};
int main(){
    number x , y , z(45) , z2;
    x.display();
    y.display();
    z.display();

    number z1(x);
    z1.display();//Copy constructor invoked here

    z2 = z;//Copy constructor will not invoked here
    z2.display();

    number z3 = z;//Copy constructor will invoked here
    z3.display();

    return 0;
}