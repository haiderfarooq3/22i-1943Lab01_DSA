// i221943_Lab01Task02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    double x, y;

public:
    Point(double initialX, double initialY) : x(initialX), y(initialY) {}
    double getX() const {
        return x;
    }
    double getY() const {
        return y;
    }
    void setX(double newX) {
        x = newX;
    }
    void setY(double newY) {
        y = newY;
    }
   /* double distance(const Point& otherPoint) const {
        double deltaX = x - otherPoint.getX();
        double deltaY = y - otherPoint.getY();
        return sqrt((deltaX * deltaX) + (deltaY * deltaY));
    }*/
    double distance(const Point& otherPoint) const {
        double deltaX = x - otherPoint.getX();
        double deltaY = y - otherPoint.getY();          //using x2-x1 formula for distance
        return sqrt((deltaX * deltaX) + (deltaY * deltaY));         //acts as usging square
    }
};

int main() {
    Point point1(1.0, 2.0);
    Point point2(4.0, 6.0);

    cout << "Point 1 coordinates: (" << point1.getX() << ", " << point1.getY() << ")\n";
    point1.setX(3.0);
    point1.setY(5.0);
    cout << "Updated Point 1 coordinates: (" << point1.getX() << ", " << point1.getY() << ")\n";
    cout << "Distance between Point 1 and Point 2: " << point1.distance(point2) << "\n";

    return 0;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
