#include<iostream>

using namespace std;
// inline int product(int a, int b){
// do not use static variable in inline function
//     return a*b;
// }

// int product(int a, int b){
//     static int c = 0; // This executes only one
//     c = c + 1; // Next time this function will run , the value of c will be retained
//     return a*b+c;  
// }

float moneyrecevied(int currentmoney , float factor = 1.04){
    return currentmoney * factor;
}
int main(){
    // int a , b ;
    // cout<<"Enter the value of a and b "<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b);
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account , then you will receive "<<moneyrecevied(money)<<"Rs after 1 year"<<endl;
    cout<<"For VIP if you have "<<money<<" Rs in your bank account , then you will receive "<<moneyrecevied(money,1.1)<<"Rs after 1 year"<<endl;
    return 0;
}