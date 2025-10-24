#include<iostream>
using namespace std;
int main()
{
   int marks[6]={45,65,35,85,55,95};
   int target=85;
   for(int i=0;i<6;i++)
   {
    if(marks[i]==target)
    {
        cout<<"The index of target value is:"<<i;
        return 0;
    }
   }
   cout<<"Target value is not found";
    return 0;
}