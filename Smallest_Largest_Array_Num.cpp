#include<iostream>
using namespace std;
int main()
{
    int marks[5]={34,54,22,87,77};
    int largest=marks[0];
    int smallest=marks[0];
    int smallest_index;
    int largest_index;

    for(int i=0;i<5;i++)
    {
      if(marks[i]>largest)
      {
        largest=marks[i];
        largest_index=i;     
      }
      if(marks[i]<smallest)
      {
        smallest=marks[i];
        smallest_index=i;
      }
    }
    cout<<"Largest number is:"<<largest<<endl;
    cout<<"Index of largest number is:"<<largest_index<<endl;
    cout<<"Smallest number is:"<<smallest<<endl;
    cout<<"Index of smallest number of array is:"<<smallest_index;
    return 0;
}