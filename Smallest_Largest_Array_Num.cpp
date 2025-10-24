#include<iostream>
using namespace std;
int main()
{
    int marks[5]={34,54,22,87,77};
    int largest=marks[0];
    int smallest=marks[0];
    for(int i=0;i<5;i++)
    {
      if(marks[i]>largest)
      {
        largest=marks[i];
      }
      if(marks[i]<smallest)
      {
        smallest=marks[i];
      }
    }
    cout<<"Largest number is:"<<largest<<endl;
    cout<<"Smallest number is:"<<smallest;
    return 0;
}