#include<iostream>

using namespace std;
// Syntax for inheriting in multiple Inheritence
// class derivedC :visibility-mode base1, visibility-mode base2
// {
//     class body of class "derivedC"
// };

class base1{
    protected :
    int base1int;
    public:
    void set_base1int(int a){
        base1int = a;
    }
};

class base2{
    protected:
    int base2int;
    public:
    void set_base2int(int b){
        base2int = b;
    }
};

class derived : public base1 , public base2{
    public:
    void show(){
        cout<<"The value of base1int is "<<base1int<<endl;
        cout<<"The value of base2int is "<<base2int<<endl;
        cout<<"The sum of these values is "<<base1int + base2int<<endl;
    }
};
int main(){
    derived anuj;
    anuj.set_base1int(5);
    anuj.set_base2int(25);
    anuj.show();
    return 0;
}


/*
The inherited derived class will look something like this :
Data members:
     base1int ----> protected
     base12int ----> protected
Member funbctions :
     set_base1int() ----> public
     set_base12int() ----> public
     show() ----> public
*/