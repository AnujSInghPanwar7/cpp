#include<iostream>

using namespace std;
class shopItem{
    int id;
    float price;
    public:
    void setData(int a , float b){
        id = a;
        price = b;
    }
    void getData(){
        cout<<"The ID of this item is : "<<id<<endl;
        cout<<"The price of this item is : "<<price<<endl;
    }
};
int main(){

    // int *ptr = &size;
    // int *ptr = new size[34];

    // 1. Genral store item 
    // 2. Veggies  item 
    // 3. Hardware  item 
    int size = 3;
    shopItem *ptr = new shopItem[size];
    shopItem *ptrTemp = ptr;
    int p,i;
    float q;
    for(i=0; i<size; i++){
         cout<<"Enter the ID and PRICE of the item"<<i+1<<endl;
         cin>>p>>q;
         ptr->setData(p,q);
         ptr++;
    }
    
    for(i=0; i<size ; i++){
        cout<<" Item number "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}