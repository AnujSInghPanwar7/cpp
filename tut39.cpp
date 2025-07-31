#include<iostream>

using namespace std;
class base{
    protected:
    int a;
    private:
    int b;
};
/*
                        Public derivation       Private derivation      Protected derivation
1. Private members      Not inherited           Not Inherited           Not Inherited
2. Protected members    Protected               Private                 Protected
3. Public members       Public                  Private                 Protected
*/

class derived: base{
};
int main(){
    base b;
    derived d;
    cout<<d.a; // This will give an error because 'a' is protected in base class
    return 0;
}