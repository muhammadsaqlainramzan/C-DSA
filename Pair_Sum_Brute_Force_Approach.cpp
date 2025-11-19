#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> values={2,7,11,15};
    vector<int> index;
    int target=9;
    for(int i=0;i<=3;i++)
    {
        for(int j=i+1;j<=3;j++)
        {
          if(values[i]+values[j]==target)
          {
            // index.push_back(i);
            // index.push_back(j);
            index={i,j};
          }
        }
    }
    cout<<index[0] <<"," <<index[1];
    return 0;
}