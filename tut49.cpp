#include<iostream>

using namespace std;
/*
syntax for initialization list in constructor:
constructor (argument list): initialization-section
{
asignment + other code
} 

class test{
int a,b;
public:
test(int i , int j): a(i) , b(j){constructor body}
};
*/

class test{
int a,b;
public:
// test(int i , int j): a(i) , b(j)
// test(int i , int j): a(i) , b(i+j)
// test(int i , int j): a(i) , b(2*j)
// test(int i , int j): a(i) , b(a+j)
// test(int i , int j): b(j) , a(i+b)  --> RED FLAG This will create problems because a will be initialized first
test(int i , int j): a(i)
{
    b = j;
    cout<<"Constructor executed"<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
}
};
int main(){
    test t(4,6);
    return 0;
}