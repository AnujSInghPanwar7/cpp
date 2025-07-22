#include<iostream>

using namespace std;
class complex{
    int a , b;
    public:
    void setnumber(int n1 , int n2){
        a = n1;
        b = n2;
    }
    // Below lines means that a non member function - sumcomplex functioin is allowed to access private members
    friend complex sumcomplex(complex o1 , complex o2);
    void printnumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i "<<endl;
    }
};
complex sumcomplex(complex o1 , complex o2){
    complex o3;
    o3.setnumber((o1.a + o2.a) , (o1.b + o2.b));
    return o3;
}
int main(){
    complex c1 , c2 , sum;
    c1.setnumber(1,4);
    c1.printnumber();

    c2.setnumber(5,8);
    c2.printnumber();

    sum = sumcomplex(c1 , c2);
    sum.printnumber();
    return 0;
}

/*
Properties of friend functions
1. Not in the scope of class 
2. Since it is not in the scope of class , it cannot be called from the object of that class . Hence c1.sumcomplex == Invalid
3. can be invoked without the help of any object 
4. Usually contains the object* as argument
5. Can be declared in private and public section of the class 
6. It cannot access the members directly by their names and need object_name.member_name to access any member.
/