#include<iostream>
#include<vector>
using namespace std;

vector<int> replaceElements(vector<int>& arr) {
    vector<int> ans;
    int maxRight = -1;
    ans.push_back(maxRight);

    for(int i=arr.size()-1;i>0;i--){
        if(arr[i]>=maxRight){
            maxRight = arr[i];
            ans.push_back(maxRight);
        }
        else{
            ans.push_back(maxRight);
        }
    }

    int i=0,j=ans.size()-1;
    while(i<=j){
        swap(ans[i],ans[j]);
        i++;
        j--;
    }

    return ans;
}

int main()
{
    vector<int> arr={17,18,5,4,6,1};

    vector<int> ans = replaceElements(arr);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}