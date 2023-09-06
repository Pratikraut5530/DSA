#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<pair<int,int>> edges{{0,1},{0,4},{4,1},{4,3},{1,3},{1,2},{3,2}};
    int n = edges.size();

    for(int i=0;i<n;i++){
        cout<<edges[i].first<<" "<<edges[i].second<<" ";
        cout<<endl;
    }

    return 0;
}