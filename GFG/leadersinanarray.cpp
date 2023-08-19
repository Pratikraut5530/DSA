#include<iostream>
#include<vector>
using namespace std;

vector<int> leaders(int a[], int n){
    
    vector<int> ans;
    //intially pushing the max value as the rightmost element of the array
    int maxRight = a[n-1];
    ans.push_back(maxRight);
        
    //traversing arry from behind and checking wheather traversing element is greater than the rightt one
    for(int i=n-2;i>=0;i--){
        if(a[i]>maxRight){
            maxRight = a[i];
            ans.push_back(maxRight);
        }
    }
        
    //reversing the ans vector as we inserted the elements in opposite order
    int i=0,j=ans.size()-1;
    while(i<j){
        swap(ans[i],ans[j]);
        i++;
        j--;
    }
    return ans;
        
}

int main()
{
    int a[6] = { 16, 17, 4 ,3 ,5 ,2 };
    vector<int> ans = leaders(a,6);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}