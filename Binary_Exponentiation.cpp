// If we have to find the x^n we can use the Binary_Exponentiation method instead of simple loop because it will use less number of operations
#include<iostream>
using namespace std;
double Power(int x,long long n)
{
    long long answer=1;
   if(n < 0)
        {
            n = -n;    // Make exponent positive
            x = 1 / x;         // Invert x for negative exponent
        }
    if(n==0||x==1)
    {
      return 1;  
    }  
    if(x==0)
    {
        return 0;
    }
    
    // Actually main logic of Binary Exponentiation is stating from here
    while(n>0)
    {   
        if(n%2==1)//By taking modulus of n with 2 we are finding the binary value of n.
        {
         answer=answer*x; 
        }
        x=x*x; 
        n=n/2;
    }
  return answer;  
}
int main()
{
    int x=3;
    long long n=5;
    long long answer=Power(x,n);
    cout<<"Answer is:"<<answer;
    return 0;
}