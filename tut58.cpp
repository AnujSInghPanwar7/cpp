#include<iostream>
#include<cstring>

using namespace std;
class cwh{
    protected:
         string title;
         float rating;
    public:
    cwh(string s, float r){
         title = s;
         rating = r;
    }
    virtual void display()=0; // do nothing function  -- > pure virtual function
};

class cwhvideo: public cwh {
    float videolength;
    public:
    cwhvideo(string s,float r , float vl):cwh(s,r){
        videolength = vl;
    }
    void display(){
        cout<<"This video title is : "<<title<<endl;
        cout<<"Rating : "<<rating<<" out of 5 is"<<endl;
        cout<<"Length of this video is : "<<videolength<<" minutes"<<endl;
    }
};

class cwhtext: public cwh {
    int words;
    public:
    cwhtext(string s,float r , int wc):cwh(s,r){
        words = wc;
    }
     void display(){
        cout<<"This text title is : "<<title<<endl;
        cout<<"Rating of this text tutorial is : "<<rating<<" out of 5 is"<<endl;
        cout<<"Number of words in this text tutorial is : "<<words<<" words"<<endl;
    }
};

int main(){
    string title;
    float rating , vlen;
    int words;

    // for code with harry video
    title = "Django tutorials";
    vlen = 4.56;
    rating = 4.89;
    cwhvideo djvideo(title , rating , vlen);
    // djvideo.display();

     // for code with harry video
    title = "Django tutorials";
    words = 4345;
    rating = 4.39;
    cwhtext djtext(title , rating , words);
    // djtext.display();

    cwh * tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}

// Rules for virtual functios 
// 1. They cannot be static 
// 2. They are accessed by object pointers
// 3. Virtual functions can be a friend of another class
// 4. A virtual function is defined in base class might not be used 
// 5. If a virtual function is defined in a base class , there is no necessity of redefining it in the derived class 