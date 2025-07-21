#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    // int a = 34;
    // cout << "The value of a is " <<a<<endl;
    // a=45;
    // cout<<"The value of a is " <<a<<endl;
    // const int b = 50;
    // cout << "The value of constant b is " << b << endl;

    // Constants in c++
    // const float a = 3.11;
    // cout<<"The value of a is "<<a<<endl;
    // a = 45.6; // This will give an error because a is a constant
    // cout<<"The value of a is "<<a<<endl;

    // Manipulators in c++
    // int a = 3 , b = 78 , c = 1233;
    // cout<<" The value of a without setw is "<<a<<endl;
    // cout<<" The value of b without setw is "<<b<<endl;
    // cout<<" The value of c without setw is "<<c<<endl;

    // cout<<" The value of a is "<<setw(4)<<a<<endl;
    // cout<<" The value of b is "<<setw(4)<<b<<endl;
    // cout<<" The value of c is "<<setw(4)<<c<<endl;

    // Operator precedence in c++
    int a = 3 , b = 4;
    // int c = (a*b) + b;
    int c = ((((a*b) + b )- 45 )+ 87 );
    cout<<c;
    return 0;

}