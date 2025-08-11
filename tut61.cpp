#include<iostream>
#include<fstream>

using namespace std;

int main(){
    //Connecting our files with hout stream
    ofstream hout("sample61.txt");

    //Creating a name string and filling it with the string entered by user 
    cout<<"Enter your name";
    string name;
    cin>>name;
    //Writing a string to the file 
    hout<<name<<" is my name ";
    hout.close(); 

    ifstream hin("sample61.txt");
    string content;
    hin>>content;
    cout<<"The content of this file is "<<content;
    hin.close();
    return 0;
}