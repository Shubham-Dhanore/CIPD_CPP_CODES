#include <iostream>
class Point
{
    int x;//variable declared
    int y;

public:
    Point()
    {
        x = 0;
        y = 0;
    }
    Point(int xx, int yy)
    {
        x = xx;
        y = yy;
    }
    void show()
    {
        std::cout << x << " , " << y << std::endl;
    }
    Point operator+(const Point &p2);

    Point operator-(const Point &p2);
};
Point Point::operator+(const Point &p2)
{
    Point sumobj;
    sumobj.x = this->x + p2.x;
    sumobj.y = this->y + p2.y;
    return sumobj;
}
Point Point::operator-(const Point &p2)
{
    Point minusobj;
    minusobj.x = this->x - p2.x;
    minusobj.y = this->y - p2.y;
    return minusobj;
}
int main()
{
    Point p1(3, 4), p2(1, 7), p3, p4;
    p3 = p1 + p2;
    p3.show();
    p4 = p2 - p1;
    p4.show();
    return 0;
}