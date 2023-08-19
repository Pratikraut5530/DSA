#include<iostream>
#include<vector>
using namespace std;

vector<int> subarraySum(vector<int>arr, int n, long long s)
    {

        if(s <=0)
        {
            return{-1};
        }
        int sum = 0,i=0,j=0;
        
        while(j<n)
        {
            sum+=arr[j];
            if(sum == s)
            {
                return { i+1 , j+1 };
            }
            else if(sum > s)
            {
                while(sum > s)
                {
                    sum-=arr[i];
                    i++;
                }
                if(sum == s)
                {
                    return { i+1 , j+1 };
                }
            }
            
            j++;
        }
        return {-1};
    }

int main()
{

    vector<int> arr={135,101, 170, 125, 79, 159 ,163, 65, 106, 146, 82, 28, 162, 92, 196, 143 ,28 ,37 ,192 ,5 ,103 ,154, 93, 183 ,22 ,117, 119, 96, 48, 127, 172, 139, 70 ,113 ,68 ,100 ,36 ,95 ,104 ,12 ,123 ,134};
    vector<int> ans = subArraySum(arr,42,468);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}