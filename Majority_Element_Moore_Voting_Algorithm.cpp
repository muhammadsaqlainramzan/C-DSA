// Majority Element means the element that comes greater than n/2 times of array lenght
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> Numbers={64,2,64,64,1,64};
    int frequency=0, answer=0;
    for(int i=0;i<Numbers.size();i++)
    {
        if(frequency==0)
        {
            answer=Numbers[i];
        }
        if(answer==Numbers[i])
        {
            frequency++;
        }
        else
        {
            frequency--;
        }
    }
    cout<<"Majority Element is:"<<answer;
    return 0;
}