#include<iostream>

using namespace std;

int main(){
    int marks[4] = {23 , 45 , 56 , 89};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    //    with loop/
    for(int i=0; i<4;i++){
        cout<<"The value of "<<i<<" is "<<marks[i]<<endl;
    }

    // Quick quiz : do the same using while and do while loops 
    
    // using while loop
    // int i = 0;
    // while(i < 4){
    //     cout<<"The value of "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }

    //using do while loop
    // int i = 0;
    // do{
    //     cout<<"The value of "<<i<<" is "<<marks[i]<<endl;
    //     i++;
    // }while(i<4);

    //Pointer and array
    int* p = marks;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    return 0;
}