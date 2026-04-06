#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void calculateArea() = 0;
    virtual void display() = 0;
    inline void message()
    {
        cout << "Shape processing..." << endl;
    }
};
class Rectangle : public Shape
{
private:
    float length, breadth, area;
public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }
    void calculateArea()
    {
        area = length * breadth;
    }
    void display()
    {
        cout << "Rectangle Area: " << area << endl;
    }
    friend void showDims(Rectangle r);
};
class Circle : public Shape
{
private:
    float radius, area;
public:
    Circle(float r)
    {
        radius = r;
    }
    void calculateArea()
    {
        area = 3.14 * radius * radius;
    }
    void display()
    {
        cout << "Circle Area: " << area << endl;
    }
};
void showDims(Rectangle r)
{
    cout << "Rectangle Dimensions: " << r.length << "x" << r.breadth << endl;
}
int main()
{
    Rectangle r1(10, 5);
    Circle c1(7);
    Shape *ptr;
    ptr = &r1;
    ptr->message();
    ptr->calculateArea();
    ptr->display();
    showDims(r1);
    ptr = &c1;
    ptr->message();
    ptr->calculateArea();
    ptr->display();

    return 0;
}