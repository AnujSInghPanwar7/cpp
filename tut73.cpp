#include<iostream>
#include<map>
#include<string>

using namespace std;

//Map is an associate array
int main(){
    map<string , int> marksMAP;
    marksMAP["Anuj"] = 87;
    marksMAP["Ankit"] = 80;
    marksMAP["Aloo"] = 82;

    marksMAP.insert({{"Pagal" , 60 } , {"bache" , 99}});
    map<string, int> ::iterator iter;
    for(iter=marksMAP.begin(); iter!=marksMAP.end() ; iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n  ";
    }
    cout<<"The size is : "<<marksMAP.size()<<endl;
    cout<<"The max_size is : "<<marksMAP.max_size()<<endl;
    cout<<"The empty  return value is : "<<marksMAP.empty()<<endl;
    return 0;
}
