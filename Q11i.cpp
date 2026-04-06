#include <iostream>
using namespace std;

class Triangle {
private:
double base, height;
public:
Triangle() {
base = 0;
height = 0;
}
Triangle(double b, double h) {
base = b;
height = h;
}
Triangle(double b) {
base = b;
height = 4;
}
Triangle(const Triangle &obj) {
base = obj.base;
height = obj.height;
}
double calculateArea() {
return 0.5 * base * height;
}
};

int main() {
Triangle t1;
Triangle t2(10, 5);
Triangle t3(7);
Triangle t4(t2);
cout << t1.calculateArea() << endl;
cout << t2.calculateArea() << endl;
cout << t3.calculateArea() << endl;
cout << t4.calculateArea() << endl;
return 0;
}