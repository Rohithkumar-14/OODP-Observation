#include<bits/stdc++.h>
using namespace std;
class Time{
    private:
    int h,m;
    long s;
    public:
    long hms_to_secs(int hr,int mi,int se){
        h=hr;
        m=mi;
        s=se;
        s=s+(h*3600)+(m*60);
        return s;
    }
};
int main(){
    Time t1;
    int hrs,mins,sec;
    cout<<"Enter Time in hrs : "<<"\n";
    cin>>hrs;   
    cout<<"Enter Time in mins : "<<"\n";
    cin>>mins;      
    cout<<"Enter Time in secs : "<<"\n";
    cin>>sec;
    cout<<"Total seconds: "<<t1.hms_to_secs(hrs,mins,sec)<<endl;
    return 0;
}