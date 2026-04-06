#include<bits/stdc++.h>
using namespace std;
class FoodApp{
private:
float price;
int quantity;
float totalPrice;
public:
FoodApp(){
    price=0.0;
    quantity=0;
    totalPrice=0;
}
FoodApp(float p,int q){
    price=p;
    quantity=q;
    totalPrice=price*quantity;
}
FoodApp operator+(const FoodApp &obj){
    FoodApp temp;
    temp.price=price+obj.price;
    temp.quantity=quantity+obj.quantity;
    temp.totalPrice=totalPrice+obj.totalPrice;
    return temp;
}
void display(){
    cout<<"Total Price : "<<totalPrice<<"\n";
    cout<<"Quantity : "<<quantity<<"\n";
}
};
int main(){
    FoodApp o1(15.7,3);
    FoodApp o2(17.7,4);
    FoodApp totalOrder=o1+o2;
    cout<<"Order 1 : "<<"\n";
    o1.display();
    cout<<"Order 2 : "<<"\n";
    o2.display();
    cout<<"Total Order details  : "<<"\n";
    totalOrder.display();
    return 0;
}
