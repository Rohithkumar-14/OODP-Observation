#include<bits/stdc++.h>
using namespace std;
class basicinfo {
public:
    string ename;
    int eid;
    char gender;
 void getBasic() {
        cout << "Enter Employee Name: "; cin >> ename;
        cout << "Enter Employee ID: "; cin >> eid;
        cout << "Enter Gender (M/F): "; cin >> gender;
    }
    void printBasic() {
        cout << "ID: " << eid << " | Name: " << ename << " | Gender: " << gender << endl;
    }
};
class deptinfo : public basicinfo {
public:
    string deptname, assignedwork;
    int timetocomplete;
    void getDept() {
        getBasic(); // Get info from parent
        cout << "Enter Dept Name: "; cin >> deptname;
        cout << "Enter Assigned Work: "; cin >> assignedwork;
        cout << "Enter Time to Complete (hrs): "; cin >> timetocomplete;
    }
    void showDept() {
        printBasic();
        cout << "Dept: " << deptname << " | Work: " << assignedwork << " | Time: " << timetocomplete << "hrs" << endl;
    }
};
class Loaninfo : public basicinfo {
public:
    float pf_amount;
    void getLoan() {
        getBasic(); // Get info from parent
        cout << "Enter PF Amount: "; cin >> pf_amount;
    }
    void showLoan() {
        printBasic();
        cout << "PF Account Balance: " << pf_amount << endl;
    }
};
int main() {
    deptinfo d;
    Loaninfo l;
    cout << "--- Enter Department Info ---" << endl;
    d.getDept();
    cout << "\n--- Enter Loan/PF Info ---" << endl;
    l.getLoan();
    cout << "\nDisplaying Department Details:" << endl;
    d.showDept();
    cout << "\nDisplaying Loan Details:" << endl;
    l.showLoan();
    return 0;
}