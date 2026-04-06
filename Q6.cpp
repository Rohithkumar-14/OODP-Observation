#include <bits/stdc++.h>
using namespace std;
class Letter
{
private:
    char l;

public:
    int check(char l)
    {
        if (islower(l))
        {
            return 7;
        }
        else
        {
            return 0;
        }
    }
};
int main(){
    Letter l1;
    char l;
cout<<"Enter a letter: ";
cin>>l; 
cout<<l1.check(l);
}