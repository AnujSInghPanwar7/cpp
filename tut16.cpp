#include<iostream>

using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}
//this will not swap a and b
void swap(int a , int b){
    int temp = a;
    a = b;
    b = temp;
}
//call by refrence using pointers
    void swapPointer(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//call by refrence using C++ refrence variables 
    void swapRefrenceVar(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int x = 4, y = 5;
    // cout<<"The sum of 4 and 5 is:"<<sum(4,5)<<endl;
    cout<<"the value of x is "<<x<<" The value of y is "<<y<<endl;
    // swap(x, y);//this will not swap a and b
    // swapPointer(&x, &y); //This will swap a and b using pointer refrence
     swapRefrenceVar(x, y); //This will swap a and b using pointer refrence variables
    cout<<"After swapping, the value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}