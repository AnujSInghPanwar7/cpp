#include<iostream>

using namespace std;
/*
Case 1:
class B : public A{
    // Order of execution of constructor --> first A() then B()
};

Case 2 :
class A: public B , public C{
    // Order of execution of constructor --> first B() then C() then A()
};

Case 3:
class A: public B , virtual public C{
    // Order of execution of constructor --> first C() then B() then A()
};
*/

class base1{
    int data1;
    public:
    base1(int i){
        data1 = i;
        cout<<"Base 1 constructor called "<<endl;
    }
    void printdatabase1(){
        cout<<"The value of data1 is "<<data1<<endl;
    }
};

class base2{
    int data2;
    public:
    base2(int i){
        data2 = i;
        cout<<"Base 2 constructor called "<<endl;
    }
    void printdatabase2(){
        cout<<"The value of data2 is "<<data2<<endl;
    }
};

class derived : public base1 , public base2{
    int derived1 , derived2;
    public:
    derived(int a , int b, int c, int d) : base1(a) , base2(b){
        derived1 = c;
        derived2 = d;
        cout<<"Derived class constructor is called "<<endl;
    }
        void printdataderived(){
        cout<<"The value of Derived1 is "<<derived1<<endl;
        cout<<"The value of Derived2 is "<<derived2<<endl;
        }
    
};

int main(){
    derived anuj(1,2,3,4);
    anuj.printdatabase1();
    anuj.printdatabase2();
    anuj.printdataderived();
    return 0;
}