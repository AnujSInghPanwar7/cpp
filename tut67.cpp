#include<iostream>

using namespace std;
// float funcaverage(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// };
// float funcaverage2(int a, float b){
//     float avg = (a+b)/2.0;
//     return avg;
// };

template<class T1 , class T2>
float funcaverage(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
};

template<class T>
void swapp(T &a , T &b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    float a;
    a=funcaverage(5,2);
    cout<<"The average of these number is : "<<a<<endl;

    float b;
    b=funcaverage(5,2.4);
    cout<<"The average of these number is : "<<b<<endl;

    int x=5,y=7;
    swapp(x,y);
    cout<<x<<endl<<y<<endl;
    return 0;
}