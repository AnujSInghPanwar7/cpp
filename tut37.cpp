#include<iostream>

using namespace std;
//Base class
class employee{
    public:
    int id;
    float salary;
    employee(int inpid){
        id = inpid;
        salary = 34.0;
    }
    employee(){}
};

//Derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
class members/methods/etc...
}

Note:
1. Deafault visibility mode is private.
2. Public visibility mode : Public members of base class become public members of derived class.
3. Private visibility mode : Public members of base class become private members of derived class.
4. Private members are never inherited.
*/

//Creating a programming class derived from employee base class
class programmer : public employee
{
    public:
    int languagecode = 9;
    programmer(int inpid){
        id = inpid;
    }
    void getdata(){
        cout<<id<<endl;
    }
};
int main(){
    employee rohan(1),harry(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer skillf(10);
    cout<<skillf.languagecode<<endl;
    skillf.getdata();
    cout<<skillf.id<<endl;
    return 0;
}