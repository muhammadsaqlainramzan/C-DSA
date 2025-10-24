#include<iostream>
using namespace std;
int Sum(int num){
int sum=0;
while (num>0)
{
    int LastDigit=num%10;//We take the modulus of num with 10 to get the last digit of the number.
    sum=sum+LastDigit;
    num=num/10;//We divide the number by 10 to get the digits of num by ignoring the last digit.
}
return sum;
}
int main()
{
    int num=234;
    cout<<"Enter a number:";
    // cin>>num;
    int result=Sum(num);
    cout<<"Sum of all the digits of a number is:"<<result;
    return 0;
}