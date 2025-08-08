#include<iostream>

using namespace std;
class baseclass{
    public:
    int var_base;
    void display(){
        cout<<"Displaying base class variable var_base "<<var_base<<endl;
    }
};

class derivedclass : public baseclass{
    public:
    int var_derived;
    void display(){
        cout<<"Displaying derived class variable var_derived"<<var_derived<<endl;
        cout<<"Displaying base class variable var_base"<<var_base<<endl;
    }
};

int main(){
    baseclass * base_class_pointer;
    baseclass objbase;
    derivedclass objderived;
    base_class_pointer = &objderived; // Pointing base class pointer to derived class

    base_class_pointer->var_base = 34;
    base_class_pointer->display();
    // base_class_pointer->var_derived = 3400; // Will throw an error
    // base_class_pointer->display();

    derivedclass * derived_class_pointer;
    derived_class_pointer = &objderived;
    derived_class_pointer->var_derived = 9448;
    derived_class_pointer->var_base = 67;
    derived_class_pointer->display();

    return 0;
}