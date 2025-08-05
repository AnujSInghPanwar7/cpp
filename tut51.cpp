#include<iostream>

using namespace std;

class complex{
    int real , imaginary;
    public:
    void setdata(int a , int b){
        real = a;
        imaginary = b;
    }
    void getdata(){
        cout<<"This is the real part of this is "<<real<<endl;
        cout<<"This is the imaginary part of this is "<<imaginary<<endl;
    }
};
int main(){
    // complex c1;
    // complex *ptr = &c1;
    complex *ptr = new complex;
    // (*ptr).setdata(1,24); ---> is exactly same as
    ptr->setdata(1,24);
    // (*ptr).getdata();---> is as good as 
    ptr->getdata();

    //Array of objects
     complex *ptr1 = new complex[4];
    ptr1->setdata(1,4);
    ptr1->getdata();
    return 0;
}