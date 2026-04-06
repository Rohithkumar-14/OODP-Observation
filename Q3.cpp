#include<bits/stdc++.h>
using namespace std;
class Worker{
private:
string name;
int hours;
float payRate;
public:     
void getValues(string n, int h, float p=700){
    name = n;
    hours = h;
    payRate = p;
}
void display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Hours: "<<hours<<endl;
    cout<<"Pay Rate: "<<payRate<<endl;
    cout<<"Total Pay: "<<hours*payRate<<endl;
}
};
int main(){
Worker w1;
cout<<"Enter name: ";
string name;
getline(cin, name);
cout<<"Enter hours: ";          
int hours;
cin>>hours; 
w1.getValues(name, hours);
w1.display();   
return 0;
}