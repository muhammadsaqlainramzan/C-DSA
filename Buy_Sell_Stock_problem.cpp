#include<iostream>
using namespace std;
int main()
{
    int Prices[6]={7,1,5,3,6,4};
    int BestBuy=Prices[0], MaxProfit=0;
    int BuyPrice=Prices[0],SellPrice=Prices[0];
   for(int i=0;i<6;i++)
   {
     if(Prices[i]<BestBuy)
     {
        BestBuy=Prices[i];
     }
     if(Prices[i]-BestBuy>MaxProfit)
     {
       MaxProfit=Prices[i]-BestBuy;
       BuyPrice=BestBuy;
       SellPrice=Prices[i];
     }
   }
   cout<<"Maximum profit is:"<<MaxProfit<<endl;
    cout << "Buy at: " << BuyPrice << endl;
    cout << "Sell at: " << SellPrice << endl;
    return 0;
}