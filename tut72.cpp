#include<iostream>
#include<list>

using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for (it=lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    
}
int main(){
    list<int> list1;//0 length of size
    list1.push_back(3);
    list1.push_back(6);
    list1.push_back(7);
    list1.push_back(0);
    list1.push_back(1);

    display(list1);
    list1.reverse();
    display(list1);
    //Removing elements from list
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(0);
    // Sorting of element 
    // list1.sort();
    // display(list1);
    
    list<int> list2(3);//Empty list of size 3
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 3;
    iter++;
    *iter = 67;
    iter++;
    display(list2);

    list1.merge(list2);
    cout<<"List1 after merging : ";
    display(list1);
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    // iter++;

    return 0;
}