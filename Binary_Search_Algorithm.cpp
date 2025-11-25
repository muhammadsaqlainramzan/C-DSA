#include<iostream>
using namespace std;
int main()
{
    int array[8]={2,5,6,13,16,20,21,30};
    int target=21;
    int n=8;
    int startIndex=0,endIndex=n-1;
    int Middle;
    while(startIndex<=endIndex)
    {
     int Middle=(startIndex+endIndex)/2 ; //OR int Middle=startIndex+(endIndex-startIndex)/2 To avoid overflow codition on coding platforms.
       if(target>array[Middle])
        {
          startIndex=Middle+1;  
        }
       else if(target<array[Middle])
        {
          endIndex=Middle-1; 
        }
        else if(array[Middle]==target) 
         {
          cout<<"Index is:"<<Middle;
          return 0;
         }
  }
    cout << "Not found";
    return 0;
}