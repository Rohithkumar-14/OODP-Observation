#include<bits/stdc++.h>
using namespace std;
class Triangle{
private:
float base,height;
public:
void setValues(float b,float h){
    base=b;
    height=h;
}
float area(){
   return 0.5*base*height;
}
};  
int main(){
   Triangle t1,t2,t3;
t1.setValues(0,0);
cout<<"Area of triangle 1 : "<<t1.area()<<"\n";
t2.setValues(5,5);
cout<<"Area of triangle 2 : "<<t2.area()<<"\n";
t3.setValues(6,4);
cout<<"Area of triangle 3 : "<<t3.area()<<"\n";
    return 0;
}