#include<iostream>

using namespace std;
//Forward declaration
class complex;
class calculator{
    public:
    int add(int a , int b){
        return (a + b);
    }
    int sumrealcomplex(complex , complex);
    int sumcompcomplex(complex , complex);
};
class complex{
    int a,b;
    // Individually declaring the function as friend
    // friend int calculator :: sumrealcomplex(complex , complex);
    // friend int calculator :: sumcompcomplex(complex , complex);

    // Alternatively we can declare the entire class as friend
    friend class calculator;
    public:
    void setnumber(int n1 , int n2){
        a = n1;
        b = n2;
    }
    void printnumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
int calculator :: sumrealcomplex(complex o1 , complex o2){
    return (o1.a + o2.a);
}
int calculator :: sumcompcomplex(complex o1 , complex o2){
    return (o1.b + o2.b);
}
int main(){
    complex o1 , o2;
    o1.setnumber(1,4);
    o2.setnumber(5,7);
    calculator calc;
    int res1 = calc.sumrealcomplex(o1 , o2);
    int res2 = calc.sumcompcomplex(o1 , o2);
    cout<<"The sum of real part of o1 and o2 is "<<res1<<endl;
    cout<<"The sum of complex part of o1 and o2 is "<<res2<<endl;
    return 0;
}