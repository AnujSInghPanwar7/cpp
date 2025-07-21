#include<iostream>

using namespace std;

class humanpart
{
    private:
    int lungs , kidney , testicle , bones , heart;
    public :
    int hands , legs , head , chest ;
    void setdata(int lungs1 ,int kidney1 ,int testicle1 ,int bones1 ,int heart1);
    void getdata(){
        cout<<"The number of lungs a human have is "<<lungs<<endl;

        cout<<"The number of kidney a human have is "<<kidney<<endl;

        cout<<"The number of testicle a human have is "<<testicle<<endl;

        cout<<"The number of bones a human have is "<<bones<<endl;

        cout<<"The number of heart a human have is "<<heart<<endl;

        cout<<"The number of hands a human have is "<<hands<<endl;

        cout<<"The number of legs a human have is "<<legs<<endl;

        cout<<"The number of head a human have is "<<head<<endl;

        cout<<"The number of chest a human have is "<<chest<<endl;


    }
};    
    void humanpart ::setdata(int lungs1 , int kidney1 , int testicle1 , int bones1 , int heart1){
    lungs =lungs1; 
    kidney=kidney1;
    testicle=testicle1;
    bones=bones1;
    heart=heart1;
}

// class employee
// {
//     private:
//     int a , b , c;
//     public:
//     int d , e;
//     void setdata(int a1 , int b1 , int c1);
//     void getdata(){
//         cout<<"The value of a is "<<a<<endl;
//         cout<<"The value of b is "<<b<<endl;
//         cout<<"The value of c is "<<c<<endl;
//         cout<<"The value of d is "<<d<<endl;
//         cout<<"The value of e is "<<e<<endl;

//     }
// };

// void employee::setdata(int a1 , int b1 , int c1){
// a = a1;
// b = b1;
// c = c1;
// }

int main(){

    humanpart anuj;
    anuj.hands = 2;
    anuj.legs = 2;
    anuj.head = 1;
    anuj.chest = 1;
    anuj.setdata(2,2,2,206,1);
    anuj.getdata();
    // employee harry;
    // // harry.a = 134;  ------>  This will thtrow error as a is private
    // harry.d = 34;
    // harry.e = 89;
    // harry.setdata(1,2,4);
    // harry.getdata(); 
    return 0;
}