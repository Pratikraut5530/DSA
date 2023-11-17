#include<iostream>
#include<cstring>
using namespace std;

int knapSack(int W,int wt[],int val[],int n){
    int dp[W+1];
    memset(dp,0,sizeof(dp));

    for(int i=1;i<n+1;i++){
        for(int w=W;w>=0;w--){
            if(wt[i-1]<= w){
                dp[w]=max(dp[w],dp[w-wt[i-1]]+val[i-1]);
            }
        }
    }

    return dp[W];
}

int main()
{
    int val[] = {60,100,120};
    int wt[] = {10,20,30};
    int W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    cout<< "Maximum Profit obtained through backtacking : "<<knapSack(W,wt,val,n);
    return 0;
}