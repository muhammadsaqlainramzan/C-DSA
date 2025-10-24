#include<iostream>
using namespace std;
//  int Binary( int Dec)
//  {
//     return 0;
//  }
int main()
{
    int Decimal=62;
    int Reminder[32];
    int i=0;//Variable to store Array size
    // int Quotient;
    if(Decimal==0)
    {
        cout<<"Binary Value is:0";
        return 0;
    }
    while(Decimal>0)
    {
      Reminder[i]=Decimal%2;
      Decimal=Decimal/2;
      i++;
    }
    cout<<"Binary Value of number is:";
    for(int j=i-1;j>=0;j--)
    {
        cout<<Reminder[j];
    }
    cout<<endl;
    return 0;
}