#include<iostream>
#include<vector>
using namespace std;

void dfs(int node,vector<int> adjLs[],int vis[]){
    vis[node]=1;
    for(auto it: adjLs[node]){
        if(!vis[it]){
            dfs(it,adjLs,vis);
        }
    }
} 

int numProvinces(vector<vector<int>> adj,int v){
    vector<int> adjLs[v];

    //to convert adjacency matrix to adjacency list
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            if(adj[i][j]==0 && i!=j){
                adjLs[i].push_back(j);
                adjLs[j].push_back(i);
            }
        }
    }

    int vis[v]={0};
    int cnt = 0;

    for(int i=0;i<v;i++){
        if(!vis[i]){
            cnt++;
            dfs(i,adjLs,vis);
        }
    }

    return cnt;
}

int main()
{
    return 0;
}