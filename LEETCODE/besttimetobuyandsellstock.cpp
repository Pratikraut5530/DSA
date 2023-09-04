#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int maxProfit(vector<int> &prices){
    int profit = 0;
    int minprice = INT8_MAX;

    for(int i=0;i<prices.size();i++){
        minprice = min(minprice,prices[i]);
        profit = max(profit,prices[i]-minprice);
    }

    return profit;
}
int main()
{
    vector<int> prices{7,1,5,3,6,4};
    int ans = maxProfit(prices);
    cout<<"Maximum profit by buying and selling stock is : "<<ans<<endl;
    return 0;
}