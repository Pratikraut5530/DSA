#include<iostream>
#include<vector>
#include<queue>

//basically the level order traversal (distance wise also )

//space complexity o(n)
//timecomplexity o(n) + o(2*E)
vector<int> bfsOfGraph(int v,vector<int> adj[]){
    int vis[v] = {0};
    vis[0] = 1; //marking the first element of this array as visited
    queue<int> q;
    q.push(0);

    vector<int> bfs; //creating a new vector to store the ans 

    while(!q.empty()){
        int node = q.front();
        q.pop();

        bfs.push_back(node);

        for(auto it: adj[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
    }

    return bfs;
}

using namespace std;
int main()
{
    
    return 0;
}