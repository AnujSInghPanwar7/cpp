#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    ofstream out;
    out.open("sample61.txt");
    out<<"This is me\n";
    out<<"This is also me \n";
    out<<"This is me also \n";
    out<<"This shit aint tuff twin\n";
    out.close();

    ifstream in;
    string st;
    in.open("sample61.txt");
    // in>>st;
    // cout<<st;
    while(in.eof()==0){
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}