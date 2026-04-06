#include<bits/stdc++.h>
using namespace std;
class Temperature{
private :
float c,f;
public:
void getValues(){
cout<<"Enter the temperature in Celsius : ";            
cin>>c;
}
void Calculate_F(){
    cout<<"Temperature in Fahrenheit : "<<fixed<<setprecision(2)<<(c*9/5)+32;
}
};
int main(){
Temperature t;
t.getValues();          
t.Calculate_F();
return 0;   
}