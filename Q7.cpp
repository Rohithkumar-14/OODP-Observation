#include<bits/stdc++.h>
using namespace std;
class Intrest{
    private:
    float initial_amount, rate, amount,final_amount;
    int year;
    public:
    void getValues(float ia, float r, int t){
        initial_amount = ia;
        rate = r;
        year = t;
    }   
    void calculation(){
        for(int i=0;i<=year;i++){
            initial_amount = initial_amount + (initial_amount*rate*0.01);
            cout<<"At the end of year "<<i<<" you will be having :  "<<fixed<<setprecision(2)<<initial_amount<<" dollars"<<endl;
        }
    }
};
int main(){
    Intrest i1;
    float ia, r;
    int t;
    cout<<"Enter the initial amount : ";
    cin>>ia;
    cout<<"Enter the rate of intrest : ";
    cin>>r;
    cout<<"Enter the number of years : ";
    cin>>t;
    i1.getValues(ia,r,t);
    i1.calculation();
}