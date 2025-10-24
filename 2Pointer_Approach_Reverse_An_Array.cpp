#include<iostream>
using namespace std;
int main()
{
    int marks[7]={35,67,89,58,97,48,92};

    for(int i=0,k=6;i<k;i++) //Here i is representing to starting index and k is representing to ending index of Array. And loop will continue until starting index is less is less than ending index otherwise Array will again start to original array.
    {
        swap(marks[i],marks[k]);
        k--;
    }
    for(int i=0;i<7;i++)
    {
        cout<<marks[i]<<"\t";
    }
    return 0;
}