#include <iostream>
using namespace std;

int Factorial(int num){
  int Factorial=1;
  for(int i=1;i<=num;i++){
    Factorial=Factorial*i;
  }
  return Factorial;
}

int nCr(int n,int r)
{
  int Fact_n=Factorial(n);
  int Fact_r=Factorial(r);
  int Fact_nr=Factorial(n-r);
  int BinomialCoefficient=Fact_n/(Fact_r*Fact_nr);
  return BinomialCoefficient;
}

int main(){
   int n=8;
   int r=2; 
   int result= nCr(n,r);
   cout<<result; 
    return 0;
}