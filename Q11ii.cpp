#include <bits/stdc++.h>
using namespace std;
class Car {
private:
    string brand, model, variant;
    float price;
    int year;
public:
    Car(string b, string m, string v, float p, int y) {
        brand = b;
        model = m;
        variant = v;
        price = p;
        year = y;
    }
    Car(string b, string m, float p, int y) {
        brand = b;
        model = m;
        price = p;
        year = y;
        variant = "Standard";
    }
    void showCarDetails() {
        cout << "------------------------------" << endl;
        cout << "Brand         : " << brand << endl;
        cout << "Model         : " << model << endl;
        cout << "Variant       : " << variant << endl;
        cout << "Year          : " << year << endl;
        cout << "Price         : $" << price << endl;
        cout << "------------------------------" << endl;
    }
    bool isOlderThan(Car c) {
        if (year < c.year) { 
            return true;
        } else {
            return false;
        }
    }
};
int main() {
    Car c1("Mercedes", "Maybach", "Sedan", 100000.00, 2008);
    Car c2("Mercedes", "S class", 150000.00, 2010);
    c1.showCarDetails();
    c2.showCarDetails();
    if (c1.isOlderThan(c2)) {
        cout << "Result: Car 1 (2008) is older than Car 2 (2010)" << endl;
    } else {
        cout << "Result: Car 2 is older than (or same age as) Car 1" << endl;
    }
    return 0;
}