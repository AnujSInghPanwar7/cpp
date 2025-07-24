//create a function which takes two point objects and computes the distance between those two points
//Hint :make it a friend function

//Hint : Use the distance formula sqrt((x2-x1)^2 + (y2-y1)^2)

// #include<iostream>
// #include<cmath>

// using namespace std;
// class formula;
// class point{
//     int x,y;
//     public:
//     friend class formula;
//     point(int a , int b){
//         x = a;
//         y = b;
//     }
//     void display(){
//         cout<<"The point is ("<<x<<","<<y<<")"<<endl;
//     }
// };
// class formula{
//     public:
//     double distance(point p1, point p2){
//         return sqrt(pow((p2.x-p1.x),2) + pow((p2.y - p1.y),2));
//     }
// };
// int main(){
//     point p1(1,2);
//     point p2(4,6);
//     p1.display();
//     p2.display();
//     formula f;
//     double dist = f.distance(p1 , p2);
//      cout<<"The distance between the two points is : "<<dist<<endl;
//     return 0;
// }




// If we want user yo give coordinates of the pooints
#include<iostream>
#include<cmath>
using namespace std;

class formula;

class point {
    int x, y;
public:
    friend class formula;
    point() {}
    point(int a, int b) : x(a), y(b) {}
    void set(int a, int b) { x = a; y = b; }
    void display() {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
};

class formula {
public:
    double distance(point p1, point p2) {
        return sqrt(pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2));
    }
};

int main() {
    int x1, y1, x2, y2;
    cout << "Enter x and y for point 1: ";
    cin >> x1 >> y1;
    cout << "Enter x and y for point 2: ";
    cin >> x2 >> y2;

    point p1(x1, y1);
    point p2(x2, y2);

    p1.display();
    p2.display();

    formula f;
    double dist = f.distance(p1, p2);     
    cout << "The distance between the two points is : " << dist << endl;
    return 0;
}
