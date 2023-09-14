#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> &weight,vector<int> &value,int index,int capacity){
    //base case
    //if only 1 item to steal then just compare its weight with knapsack capacity

    if(index==0){
        if(weight[0]<=capacity){
            return value[0];
        }
        else{
            return 0;
        }
    }

    int include = 0;
    if(weight[index]<=capacity){
        include = value[index] + solve(weight,value,index-1,capacity-weight[index]);
    }

    int exclude = 0 + solve(weight,value,index-1,capacity);

    int ans = max(exclude,include);

    return ans;
}

int main()
{
    return 0;
}