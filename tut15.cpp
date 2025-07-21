#include<iostream>

using namespace std;

// int sum(int a, int b){
//     int c = a + b;
//     return c;
// }
// int main(){
//     int num1, num2;
//     cout<<"Enter the first number: ";
//     cin>>num1;
//     cout<<"enter the second number: ";
//     cin>>num2;
//     cout<<"The sum is :"<<sum(num1, num2)<<endl;
//     return 0;
// }



//function prototype
//Type fynction_name(arguments);
// int sum(int a, int b);//------>  Acceptable
// int sum(int a, b);//------>  Not Acceptable
int sum(int , int);//------>  Acceptable

//void g(void);------>  Acceptable

void g();//------>  Acceptable
int main(){
    int num1, num2;
    //num1 and num2 are or actual parameters
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"enter the second number: ";
    cin>>num2;
    cout<<"The sum is :"<<sum(num1, num2)<<endl;
    g();
    return 0;
}
int sum(int a, int b){
    int c = a + b;
    //a and b are formal parameters
    return c;
}

void g(){
    cout<<"\nHello , Good Morning";
}