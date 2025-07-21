#include<iostream>

using namespace std;

int main(){
    // What is a pointer? -----> data type which hold address of other data type
    int a =3;
    int* b=&a;
    // & ----> (Address of) operator
    cout<<"The address of a "<<&a<<endl;
     cout<<"The address of a "<<b<<endl;
    //  *------> (Valrue at ) operator 
    cout<<"The value at b is "<<*b<<endl;
    // pointer to pointer 
    int** c = &b;
    cout<<"the address of b is "<<&b<<endl;
    cout<<"the address of b is "<<c<<endl;
    cout<<"the value at address c is "<<*c<<endl;
    cout<<"the value at address value_at(value_at(c)) is "<<**c<<endl;
    return 0;
}