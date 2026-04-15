#include <bits/stdc++.h>
using namespace std;

class Car {
protected:
    string plateNumber, model, brand;
    int dailyRate;
    bool isAvailable;

public:
    virtual double calculateTotal(int days) = 0;
    virtual void showBreakdown(int days) = 0;

    Car(string p, string m, string b, int r) {
        plateNumber = p;
        model = m;
        brand = b;
        dailyRate = r;
        isAvailable = true;
    }

    void toggleAvailability() {
        isAvailable = !isAvailable;
    }

    void getInfo() {
        cout << left << setw(10) << brand << setw(12) << model 
             << " [" << plateNumber << "] - $" << dailyRate << "/day"
             << " | Status: " << (isAvailable ? "AVAILABLE" : "RENTED");
    }

    string getModel() {
         return model; 
        }
    bool checkAvail() { 
        return isAvailable; 
    }
};

class LuxuryCar : public Car {
private:
    int chauffeurFees;
public:
    LuxuryCar(string p, string m, string b, int r, int cf) : Car(p, m, b, r) {
        chauffeurFees = cf;
    }

    double calculateTotal(int days) {
        return (days * dailyRate) + (double)chauffeurFees;
    }

    void showBreakdown(int days) {
        cout << "Base Price:    " << days << " days x $" << dailyRate << " = $" << (days * dailyRate) << endl;
        cout << "Chauffeur Fee: +$" << chauffeurFees << endl;
    }
};

class EconomyCar : public Car {
private:
    int discountPrice;
public:
    EconomyCar(string p, string m, string b, int r, int dp) : Car(p, m, b, r) {
        discountPrice = dp;
    }

    double calculateTotal(int days) {
        double total = (double)days * dailyRate;
        if (days > 7) total = total - discountPrice;
        return total;
    }

    void showBreakdown(int days) {
        cout << "Base Price:    " << days << " days x $" << dailyRate << " = $" << (days * dailyRate) << endl;
        if (days > 7) {
            cout << "Discount:      -$" << discountPrice << " (Long-term stay applied)" << endl;
        } else {
            cout << "Discount:      $0 (Rent more than 7 days for discount)" << endl;
        }
    }
};

class Bookings {
private:
    string customerName;
    string licenseID;
    int days;
    Car *carRented;

public:
    Bookings(string name, string id, int d, Car* c) {
        customerName = name;
        licenseID = id;
        days = d;
        carRented = c;
    }

    void generateInvoice() {
        cout << "\n==============================";
        cout << "\n       RENTAL INVOICE         ";
        cout << "\n==============================";
        cout << "\nCustomer: " << customerName;
        cout << "\nLicense:  " << licenseID;
        cout << "\nVehicle:  " << carRented->getModel();
        cout << "\nDays:     " << days << endl;
        cout << "------------------------------" << endl;
        carRented->showBreakdown(days);
        cout << "------------------------------" << endl;
        cout << "FINAL TOTAL: $" << carRented->calculateTotal(days);
        cout << "\n==============================\n";
    }

    void confirmBooking() {
        carRented->toggleAvailability();
        cout << "\nBooking successful for " << customerName << "!" << endl;
    }
};

int main() {
    Car *fleet[6];
    int totalCars = 0;

    fleet[totalCars++] = new LuxuryCar("LUX-001", "S-Class", "Mercedes", 200, 50);
    fleet[totalCars++] = new LuxuryCar("LUX-002", "A8", "Audi", 180, 45);
    fleet[totalCars++] = new LuxuryCar("LUX-003", "G-Wagon", "Mercedes", 250, 70);
    fleet[totalCars++] = new EconomyCar("ECO-001", "Civic", "Honda", 50, 20);
    fleet[totalCars++] = new EconomyCar("ECO-002", "Swift", "Suzuki", 30, 10);
    fleet[totalCars++] = new EconomyCar("ECO-003", "Altroz", "Tata", 35, 12);

    cout << "========================================" << endl;
    cout << "   WELCOME TO THE CAR RENTAL SERVICE    " << endl;
    cout << "========================================\n" << endl;

    cout << "Full Fleet Status:\n";
    cout << "------------------------------------------------------------\n";
    for (int i = 0; i < totalCars; i++) {
        cout << i + 1 << ". ";
        fleet[i]->getInfo();
        cout << endl;
    }
    cout << "------------------------------------------------------------\n";

    int choice;
    cout << "\nSelect a car number to book: ";
    cin >> choice;

    int index = choice - 1;

    if (index >= 0 && index < totalCars) {
        if (fleet[index]->checkAvail()) {
            string name, id;
            int d;

            cout << "Enter Customer Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter License ID: ";
            getline(cin, id);
            cout << "Enter Rental Days: ";
            cin >> d;

            Bookings b(name, id, d, fleet[index]);
            b.confirmBooking();
            b.generateInvoice();
        } else {
            cout << "\nError: Car already RENTED!" << endl;
        }
    } else {
        cout << "\nError: Invalid selection!" << endl;
    }

    for(int i = 0; i < totalCars; i++) {
        delete fleet[i];
    }

    return 0;
}