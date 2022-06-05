#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int buyprice=prices[0];
    int sellprice=prices[1];
    int profit=sellprice-buyprice;
    for(int i=0;i<prices.size();i++){
        buyprice=min(buyprice,prices[i]);
        int new_profit=prices[i]-buyprice;
        profit=max(new_profit,profit);
        
    }
    return profit;
}
