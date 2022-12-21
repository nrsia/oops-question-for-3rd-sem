#include <iostream>
#include <math.h>
using namespace std;

class Point {

    public:
        float x,y;
        void input() {
            cout<<"Enter X-coordinate: ";
            cin>>x;
            cout<<"Enter Y-coordinate: ";
            cin>>y;
        }
};

float distance(Point a, Point b) {
    return (sqrt(pow(a.y - b.y, 2) + pow(a.x - b.x, 2)));
} 

int main() {

    Point a,b;
    cout<<"Enter the coordinates of two points"<<endl;
    a.input();
    b.input();
    cout<<"Distance between both the points: "<<distance(a,b);

    return 0;
}