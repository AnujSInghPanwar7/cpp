#include<iostream>

using namespace std;

int main(){
    int age;
    cout<< "Enter your age "<<endl;
    cin>>age;
    // Selection control structure : If - else if - else ladder
    // if(age<18){
    //     cout<<"You are a minor. "<<endl;
    // }
    // else if (age == 18){
    //     cout<<"You are a  teenager. "<<endl;
    // }
    // else {
    //     cout<<"You are an aduldt. "<<endl;
    // }
     // Selection control structure : Switch case statement
     switch(age){
        case 18:
        cout<<"You are 18 "<<endl;
        break;
        case 22:
        cout<<"You are 22 "<<endl;
        break;
        case 2:
        cout<<"You are 2 "<<endl;
        break;
        default:
        cout<<"You are not 18 , 22 or 2 "<<endl;
        break;    }
    
        return 0;
}