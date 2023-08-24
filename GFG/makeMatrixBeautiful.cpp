#include<iostream>
#include <vector>
using namespace std;



void print(vector<vector<int>> matrix,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    vector<vector<int>> matrix{{1,2,3},{4,2,3},{3,2,1}};
    int n=3;
    print(matrix,n);

    int maxSum = 0;
        
    for(int i=0;i<n;i++){
        int total = 0;
        for(int j=0;j<n;j++){
            total += matrix[i][j];
        }
        maxSum = max(maxSum,total);
    }

    cout<<maxSum<<endl;

    return 0;
}