/*
Create 2 classes:
1. Simple calculator - takes input of 2 numbers using a utility function and performs +, -, *, / and display the results using another function.
2. Scientific calculator - Takes input of 2 numbers using a utility function and performs any four scintific operation of your choice and diplays the results using another function.

Create another class hybrid calculator and inherit it using these 2 classes:
*/
#include<iostream>
#include<cmath>

using namespace std;
class calculator{
    protected:
    float a ,b;
    public:
    void setnumber(int n1 , float n2){
        a = n1;
        b = n2;
    }
    void printnumber(){
        cout<<"The two number are : "<<a<<" and "<<b<<endl;
    }
    void sum(){
        cout<<"The sum of these two number is : "<<a+b<<endl;
    }
    void subtraction(){
        cout<<"The subtraction of these two number is : "<<a-b<<endl;
    }
    void multiply(){
        cout<<"The multiplication of these two number is : "<<a*b<<endl;
    }
    void divide(){
        float c=b/a;
        cout<<"The division of these two number is : "<<c<<endl;
    }
};

class scintificCalculator: public calculator{
   public:
    void printnum(){
        cout<<"The two number are : "<<a<<" and "<<b<<endl;
    }
    void squareroot(){
        cout<<"The square root of "<<a<<" is : "<<sqrt(a)<<endl;
    }
    void square(){
        cout<<"The square of "<<a<<" is : "<<pow(a,2)<<endl;
    }
     void cuberoot(){
        cout<<"The number is :"<<b<<endl;
        cout<<"The cube root of "<<b<<" is : "<<cbrt(b)<<endl;
    }
    void cube(){
      cout<<"The cube of "<<a<<" is : "<<pow(a,3)<<endl;
    }
};

class hybridcalculator: public scintificCalculator{
    public:
		void displayall(){
              // Print numbers
        printnumber();
        // Basic operations
        sum();
        subtraction();
        multiply();
        divide();
        // Scientific operations
        square();
        squareroot();
        cube();
        cuberoot();
		}
};

int main(){
    hybridcalculator hycal;
    hycal.setnumber(4,27);
    hycal.displayall();
    return 0;
}

