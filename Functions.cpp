#include<iostream>
using namespace std;
int Factorial(int n)
  {
      int Fac=1;
      for(int i=1;i<=n;i++)
      {
        Fac=Fac*i;
      }
    return Fac;  
  }
int main()
{
 int result=Factorial(5);
 cout<<result;
 return 0;
}