#include<bits/stdc++.h>
using namespace std;
class Complex{
    private :
    int real,imag;
    public:
    Complex(int r,int i){
        real=r;
        imag=i;
    }
    Complex(){
        real=0;
        imag=0;
    }
    Complex operator+(const Complex& obj){
        Complex temp;
        temp.real=real+obj.real;
        temp.imag=imag+obj.imag;
        return temp;
    }
    Complex operator-(const Complex& obj){
        Complex temp;
        temp.real=real-obj.real;
        temp.imag=imag-obj.imag;
        return temp;
    }
    void display(){
        cout<<real<<" + i("<<imag<<") "<<"\n";
    }
};
int main(){
Complex c1(2,3);
Complex c2(3,4);
Complex c3=c1+c2;
Complex c4=c1-c2;
cout<<"Sum Of Complex Numbers : "<<"\n";
c3.display();
cout<<"Difference  Of Complex Numbers : "<<"\n";
c4.display();
return 0;
}