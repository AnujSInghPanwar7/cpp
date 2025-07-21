#include<iostream>
using namespace std;
int c=45;
int main(){
    //********** Build in data types **********
    // int a,b,c;
    // cout<<"Enter the vaslue of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the vaslue of b:"<<endl;
    // cin>>b;
    // c=a+b;
    // cout<<"The sum of a and b is "<<c<<endl;
    // cout<<" The global c is "<<::c<<endl;

//********* Float , Double and Long Double Literals *********
    // float d=34.4f;
    // long double e=34.4l;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    // cout<<"Thee value of d is "<<d<<endl<<"The value of e is "<<e<<endl;
    // *********refrence variables*********
    // Rohan das ------> Monty ------> Rohu --------> Dangerous coder
    // float x=455;
    // float &y=x;
    // cout<<"The value of x is "<<x<<endl;
    // cout<<"The value of y is "<<y<<endl;
    // *************Typecasting*************
    int a=45;
    float b=45.46;
    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of a is "<<(float)a<<endl;

    cout<<"The value of b is "<<int(b)<<endl;
    cout<<"The value of b is "<<(int)b<<endl;

    int c= int (b);

    cout<<"The expression is "<<a + b <<endl;
    cout<<"The expression is "<< a + int(b)<<endl;
    cout<<"The expression is "<< a + (int)b<<endl;
        return 0;
}