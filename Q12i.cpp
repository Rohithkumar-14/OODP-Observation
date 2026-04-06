#include<bits/stdc++.h>
using namespace std;
class Student {
public:
    string name;
    int marks;
    void getMarks() {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter marks (out of 100): ";
        cin >> marks;
    }
};
class Result : public Student {
public:
    void displayResult() {
        cout << "\n--- Student Report ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl; 
        if(marks >= 50) {
            cout << "Status: PASSED" << endl;
        } else {
            cout << "Status: FAILED" << endl;
        }
    }
};

int main() {
    Result res;
    res.getMarks();
    res.displayResult();
    return 0;
}