#include<iostream>

using namespace std;
class base{
    int data1;
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base:: setdata(void){
    data1 = 10;
    data2 = 20;
}

int base::getdata1(void){
    return data1;
}

int base::getdata2(void){
    return data2;
}

class derived : private base{
    int data3;
    public:
    void process();
    void display();
};

void derived :: process(){
    setdata(); //Setting data1 and data2 is base class
    data3 = data2*getdata1();
}

void derived::display(){
    cout<<"Value of data1 is "<<getdata1()<<endl;
    cout<<"Value of data2 is "<<data2<<endl;
    cout<<"Value of data3 is "<<data3<<endl;
}
    int main(){
        derived der;
        // der.setdata();
        der.process();
        der.display();
    return 0;
}