#include <iostream>

class Point

{

    int x;

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

    int getX() const { return x; }

    void setX(int x_) { x = x_; }

    int getY() const { return y; }

    void setY(int y_) { y = y_; }

    Point operator-(const Point &p2)
    {

        Point sub;

        sub.x = this->x - p2.x;

        sub.y = this->y - p2.y;

        return sub;
    }

    Point operator+(const Point &p2)
    {

        Point sum;

        sum.x = this->x + p2.x;

        sum.y = this->y + p2.y;

        return sum;
    }

    Point operator*(const Point &p2)
    {

        Point multi;

        multi.x = this->x * p2.x;

        multi.y = this->y * p2.y;

        return multi;
    }

    friend void operator<<(std::ostream &op, Point &p)
    {
        op<<"inside friend function"<<std::endl;
        op << p.x << "," << p.y;
    }
};

int main()
{

    Point p1(20, 42);

    Point p2(10, 30);

    Point p3;

    p3 = p1 - p2;

    // p3.show();

    p3 = p1 + p2;

    // p3.show();

    // p3.show();

    p3 = p1 * p2;

    std::cout<< p3;
}