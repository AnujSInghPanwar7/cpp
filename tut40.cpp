#include<iostream>

using namespace std;
class student{
    int roll_no;
    public:
    void set_roll_no(int);
    void get_roll_no(void);
};

void student :: set_roll_no(int r){
    roll_no = r;
}

void student :: get_roll_no(void){
    cout<<"Your roll number is "<<roll_no<<endl;
}

class exam : public student{
    protected :
    float maths ;
    float physics;
    public:
    void set_marks(float, float); 
    void get_marks();
};

void exam :: set_marks(float m , float p){
    maths = m;
    physics = p;
}

void exam::get_marks(){
    cout<<"Your marks in maths are "<<maths<<endl;
    cout<<"Your marks in physics are "<<physics<<endl;
}

class result : public exam{
    float percentage;
    public:
    void display(){
    get_roll_no();
    get_marks();
    cout<<"Your percentage is "<<(maths + physics)/2<<"%"<<endl;
    }
};
int main(){
    result anuj;
    anuj.set_roll_no(57);
    anuj.set_marks(90.0 , 99.9);
    anuj.display();
    return 0;
}

/*
Notes :
       If we are inheriting B from A and C from B [A---> B ---> C].
       1. A is the base class for B and B is the base class for C.
       2. A-->B-->C is called Inheritence path.
*/