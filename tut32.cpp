#include<iostream>

using namespace std;
class simple{
    int data1 , data2;
    public:
    simple(int a , int b = 9){
        data1 = a;
        data2 = b;
    }
    void printdata(){
        cout<<"The value of data1 is "<<data1<<" and data2 is "<<data2<<endl;
    }
};
int main(){
    simple s(1);
    s.printdata();
    return 0;
}