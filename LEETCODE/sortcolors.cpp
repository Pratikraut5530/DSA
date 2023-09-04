#include<iostream>
#include<vector>

using namespace std;
//DUTCH NATIONAL FLAG ALGORITHM

void sortColors(vector<int> &nums,int n){
    
    int low=0,mid=0,high=n-1;

    while(mid<=high){
        //if the element is 0 swaping it with low so that it remains in the O to low-1 frame
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }

        //if the element is 1 means it as the correct position ie low to mid-1 frame
        else if(nums[mid]==1){
            mid++;
        }

        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> nums{2,0,2,1,1,0};
    int n = nums.size();

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    sortColors(nums,n);

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;

    return 0;
}