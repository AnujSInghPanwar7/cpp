#include<iostream>

using namespace std;
/*
student --> test
student --> sports
test --> result
sports --> result
*/
class student{
    protected:
    int rollno;
    public:
    void set_number(int a){
        rollno = a;
    }
    void printnumber(){
        cout<<"The roll no of student is : "<<rollno<<endl;
    }
};

class test : virtual public student{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1 , float m2){
        maths = m1;
        physics = m2;
    }
    void print_marks(){
        cout<<"You result is here : "<<endl<<" Maths "<<maths<<endl<<" Physics "<<physics<<endl;
    }
};

class sports : virtual public student{
    protected :
    float score ;
    public:
    void set_score(float sc){
        score = sc;
    }
    void print_score(){
        cout<<"Your pt score is : "<<score<<endl;
    }
};

class result: public test, public sports{
    protected:
    float total;
    public:
    void display(){
        total = physics + maths + score;
        printnumber();
        print_marks();
        print_score();
        cout<<"Your total score is : "<<total<<endl;
    }
};
int main(){
    result anuj;
    anuj.set_number(57156);
    anuj.set_marks(70.8,92.9);
    anuj.set_score(6.9);
    anuj.display();
    return 0;
}