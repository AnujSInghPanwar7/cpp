#include<iostream>

using namespace std;
class employee{
    int id;
    static int count;
    public:
    void setdata(){
        cout<<"Enter the id of employee "<<endl;
        cin>>id;
        count++;
    }
    void getdata(){
        cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
    }
    static void getcount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};

int employee::count=1000;//Default value is 0
int main(){
    employee harry , anuj , lmao;
    // harry.id = 1;
    // harry.count = 1; //Cannot do this as id and count are private
    
    harry.setdata();
    harry.getdata();
    employee::getcount();

    anuj.setdata();
    anuj.getdata();
    employee::getcount();

    lmao.setdata();
    lmao.getdata();
    employee::getcount();

    return 0;
}