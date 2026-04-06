#include<bits/stdc++.h>
using namespace std;
class Calculator{
private:
float num1,num2;
public:     
void getValues(){
    cout<<"Enter num1 : ";
    cin>>num1;
    cout<<"\n"<<"Enter num2 : ";     
    cin>>num2;
}
void sum(){
    cout<<"Sum : "<<num1+num2<<"\n";
}
void difference(){
    if(num1>num2){
     cout<<"Difference : "<<num1-num2<<"\n";
    }
    else{   
    cout<<"Difference : "<<num2-num1<<"\n";
}
}
void product(){
    cout<<"Product : "<<num1*num2<<"\n";    
}
void quotient(){
    if(num2!=0){
    cout<<"Quotient : "<<num1/num2<<"\n";
    }
    else{
        cout<<"Error: Division by zero is not allowed.\n";
    }
}
};
int main(){
    Calculator calc;
    calc.getValues();
    calc.sum();
    calc.difference();
    calc.product();
    calc.quotient();
    return 0;
}   