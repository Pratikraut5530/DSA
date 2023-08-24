#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //graph representtaton using adjacency matrix
    //space complexity O(n^2)
    //time complexity o(n)
    // int n,m;
    // cin>>n>>m;
    // int adj[n+1][m+1];
    // for(int i=0;i<m;i++){
    //     int u,v;
    //     cin>> u ,v;
    //     adj[u][v] = 1 ;
    //     adj[v][u] = 1 ;

    // }


    //array reresentation of graph
    //space complexity o(2*E)
    //time complxity o()
    int n,m;
    cin>> n >> m;
    vector<int> adj[n+1];
    //if the graph is a directed graph then the space complexity would be 0(E) as we are storing only one edge at time
    for(int i=0;i<m;i++){
        int u,v;
        //u---->v during directed graph
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);//during directed graph no need to use this push_back
    }

    //weighted graph(how to store weighted values)
    int n,m,w;
    cin>>n>>m;
    vector<pair<int,int>> adj[n+1];
    
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(make_pair(v,w));
    }

    return 0;
}