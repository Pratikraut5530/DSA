#include<iostream>
#include<vector>

using namespace std;


//space complexity : O(n)
//time complexity :  O(n) + (2*E)
void dfs(int node,vector<int> adj[],int vis[],vector<int> &ls){
    vis[node] = 1;
    ls.push_back(node);

    //traverse all its neighbours
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,ls);
        }
    }
}
vector<int> dfsOfGraph(int V, vector<int> adj[]) {
    // Code here
    int vis[V] ={0};
    int start =0;
    vector<int> ls;
    dfs(start,adj,vis,ls);
    return ls;
}

int main()
{
    return 0;
}