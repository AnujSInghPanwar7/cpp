#include<iostream>

using namespace std;

class shop{
    int itemid[100];
    int itemPrice[100];
    int counter;
    public:
    void initcounter(void){counter = 0;}
    void setPrice(void);
    void displayPrice(void);
};

void shop ::setPrice(void){
    cout<<"Enter item id of your item "<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"Enter price of your item "<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop ::displayPrice(void){
    for(int i = 0 ; i < counter ; i++){
        cout<<"The price of item with id "<<itemid[i]<<" is "<<itemPrice[i]<<endl;
    }
}
int main(){
    shop dukaan;
    dukaan.initcounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}