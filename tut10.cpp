#include<iostream>

using namespace std;

int main(){
    /*Lopos in c++
    There are thress types of loops
    1. For loop
    2. While loop
    3. Do-while loop*/

    // syntax for for loop 
    // for(initialization; condidtion; updation){
    //     loop body(c++ code);
    // }
    // for(int i = 0; i<4 ;i++){
    //     cout<<"The value of i is "<<i<<endl;
    // }

    // example of infinite for loop
    // for(int i = 0; 34<=40 ;i++){
    //     cout<<"The value of i is "<<i<<endl;
    //  }

    // While loop in c++
    // syntax
    // while(condition){
    //     c++ statements;
    // }

    //Printing 1 to 40 using while loop
    // int i=1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }

    //Example of infinite while loop
    // int i=1;
    // while(true){
    //     cout<<i<<endl;
    //     i++;
    // }

      // Do-While loop in c++
    // syntax
    // do{
    //     c++ statements;
    // }while(condition);

    //Printing 1 to 40 using while loop
    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i<=40);

    // 6s table
    int a,b;
    for(int i=0;i<=10;i++){
        cout<<i*6<<endl;
        
    }
    return 0;
}