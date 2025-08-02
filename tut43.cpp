#include<iostream>

using namespace std;
class base1{
    public:
    void greet(){
    cout<<"How are you"<<endl;
    }
};

class base2{
    public:
    void greet(){
    cout<<"Kaise ho aap"<<endl;
    }
};

class derived : public base1 , public base2{
    public:
    int a;
    void greet(){
        base2 :: greet();
    }
};

class b {
    public:
    void say(){
        cout<<"Hello World"<<endl;
    }
};

class d : public b{
    //d's new say() method will override base class's say() method
    public:
    void say(){
        cout<<"Hello my pretty handsom boiii"<<endl;
    }
};
int main(){
    // Ambibuity 1
    // base1 base1obj;
    // base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();

    // derived d;
    // d.greet();

    // Ambibuity 2
    b B;
    B.say();

    d D;
    D.say();
    return 0;
}