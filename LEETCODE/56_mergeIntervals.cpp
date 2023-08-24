#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    int n=intervals.size();
    int m=intervals[0].size();

    int lower=0,upper=0;

    vector<vector<int>> ans;

    for(int row=0;row<n;row++){
        if(lower == 0 || upper == 0 ){
            lower = intervals[row][0];
            upper = intervals[row][1];
            vector<int> temp;
            temp.push_back(lower);
            temp.push_back(upper);
            ans.push_back(temp);
        }
        else if(intervals[row][0] <= upper && intervals[row][1] > intervals[row][0]){
            upper = intervals[row][1];
            vector<int> temp;
            temp.push_back(lower);
            temp.push_back(upper);
            ans.push_back(temp);
        }
        else if(intervals[row][0] > upper && intervals[row][1] > intervals[row][0]){
            lower = intervals[row][0];
            upper = intervals[row][1];
            vector<int> temp;
            temp.push_back(lower);
            temp.push_back(upper);
            ans.push_back(temp); 
        }
    }
    return ans;
}

void print(vector<vector<int>> matrix){
    int n=matrix.size();
    int m=matrix[0].size();

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{   
    vector<vector<int>> intervals{
        {1,3}
    };

    print(intervals);
    cout<<endl;

    vector<vector<int>> ans = merge(intervals);
    print(ans);
    
    return 0;
}