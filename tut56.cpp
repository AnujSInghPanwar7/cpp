#include<iostream>

using namespace std;

class baseclass{
    public:
    int var_base;
    virtual void display(){
        cout<<"1 vDisplaying base class variable var_base "<<var_base<<endl;
    }
};

class derivedclass : public baseclass{
    public:
    int var_derived;
    void display(){
        cout<<"2 Displaying derived class variable var_derived "<<var_derived<<endl;
        cout<<"2 Displaying base class variable var_base "<<var_base<<endl;
    }
};

int main(){
    baseclass * base_class_pointer;
    baseclass objbase;
    derivedclass objderived;

    base_class_pointer = &objderived;
    base_class_pointer->display();
    return 0;
}