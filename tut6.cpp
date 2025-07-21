// There are two type of header files:
// 1: System header files : It comes with the compiler
#include<iostream>
// 2: USer defined header file : It is written by the programmer 
#include"this.h"  //This will producde an error if this.h is not present in the same directory
 using namespace std;
 int main(){
    int a=4,b=5;
    cout<<"opertor in c++:"<<endl;
    cout<<"Following are the operators in c++"<<endl;
    //Arthimetic operators
    cout<<"The value of a+b is "<<(a+b)<<endl;
    cout<<"The value of a-b is "<<(a-b)<<endl;
    cout<<"The value of a*b is "<<(a*b)<<endl;
    cout<<"The value of a/b is "<<(a/b)<<endl;
    cout<<"The value of a%b is "<<(a%b)<<endl;
    cout<<"The value of a++ is "<<(a++)<<endl;
    cout<<"The value of a-- is "<<(a--)<<endl;
    cout<<"The value of ++a is "<<(++a)<<endl;
    cout<<"The value of --a is "<<(--a)<<endl;
    //Logical operators
    cout<<"Following are the logical operators in c++"<<endl;
    cout<<"The value of logical and operators((a==b) && (a<b)) "<<((a==b) && (a<b))<<endl;
    cout<<"The value of logical or operators((a==b) || (a<b)) "<<((a==b) || (a<b))<<endl;
      cout<<"The value of logical not operators(!(a==b)) "<<(!(a==b))<<endl;
    return 0;
 }