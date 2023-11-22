#include<iostream>
#include<vector>
using namespace std;

int f(int ind,int W,vector<int> &wt,vector<int> &val,vector<vector<int>> &dp){
    //base case
    if(ind == 0){
        if(wt[0]<=W){
            return val[0];
        }
        return 0;
    }

    if(dp[ind][W] != -1){
        return dp[ind][W];
    }
    int notTake = 0 + f(ind-1,W,wt,val,dp);
    int take = INT8_MIN;
    if(wt[ind]<=W){
        take = val[ind] + f(ind-1,W-wt[ind],wt,val,dp);
    }
    return dp[ind][W] = max(take,notTake);
}

int knapsack(vector<int> weight,vector<int> value,int n,int maxWeight){
    //memoisation   
    vector<vector<int>> dp(n,vector<int> (maxWeight+1,-1));
    return f(n-1,maxWeight,weight,value,dp);
}
int main()
{
    return 0;
}