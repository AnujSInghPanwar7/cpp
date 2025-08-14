#include<iostream>

using namespace std;
template<class T>
class Anuj{
    public:
    T data;
        Anuj(T a){
            data = a;
        }
        void display();
};

template<class T> 
void Anuj<T>::display(){
    cout<<data;
}

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}

template <class T>
void func1(T a){
    cout<<"I am templatised  func() "<<a<<endl;
}
int main(){
    // Anuj <int>a(5);
    // cout<<"Value : "<<a.data<<endl;
    // a.display();

    // func(5);//Exact match takes the highest priority
    func1(8);
    return 0;
}