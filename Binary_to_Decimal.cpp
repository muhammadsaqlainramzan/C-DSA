#include<iostream>
using namespace std;
int main()
{
    int Binary=101;
    int Decimal=0;
    int lastDigit;
    int Base=1;
    while(Binary>0)
    {
        lastDigit=Binary%10;
        Decimal=Decimal+(lastDigit*Base);
        Binary=Binary/10;
        Base=Base*2; 
    }
    cout<<"Decimal Value is:"<<Decimal;
    return 0;
}