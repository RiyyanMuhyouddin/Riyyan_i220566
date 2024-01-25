#include<iostream>
using namespace std;
class Point
{
	double x, y;
public:
    Point(double x1, double y1) 
    {
        x = x1;
        y = y1;
    }
    double getx() const {
        return x;
    }
    void setx(double x1) {
        x = x1;
    }
    double gety() const {
        return y;
    }
    void sety(double y1) {
        y = y1;
    }
    double distance(const Point& p2) const {
        double x2 = x - p2.getx();
        double y2 = y - p2.gety();
        return sqrt(x2 * x2 + y2 * y2);
    }
};
int main()
{
    Point p1(2.0, 3.0);
    Point p2(1.0, 1.0);
    cout << "Distance between p1 and p2: " << p1.distance(p2) << endl;
    return 0;
}

