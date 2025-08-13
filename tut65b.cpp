#include<iostream>

using namespace std;
template<class T>
class mathematics{
    T num1;
    T num2;
    public:
    mathematics(T a, T b){
        num1 = a;
        num2 = b;
    }
    void display(){
        cout<<"The sum of these number is : "<<num1 + num2<<endl;
        cout<<"The sub of these number is : "<<num1 - num2<<endl;
        cout<<"The multiply of these number is : "<<num1 * num2<<endl;
        cout<<"The division of these number is : "<<num1 / num2<<endl;
    }
};
int main(){
    mathematics <float> obj(4,2);
    obj.display();
    return 0;
}