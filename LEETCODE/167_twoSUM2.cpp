#include<iostream>
#include<vector>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    int start = 0;
    int end = numbers.size()-1;
    vector<int> ans;

    while(start < end){
        if(numbers[start]+numbers[end] == target){
            ans.push_back(start+1);
            ans.push_back(end+1);
            return ans;
        }

        if(numbers[start]+numbers[end] > target){
            end--;
        }

        if(numbers[start]+numbers[end] < target){
            start++;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr{2,7,11,15};
    twoSum(arr,9);
    
    return 0;
}