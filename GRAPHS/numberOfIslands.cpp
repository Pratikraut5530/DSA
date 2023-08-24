#include<iostream>
#include<vector>
#include<queue>

using namespace std;

// o== water
//1 == land
//no. of connected components
void bfs(int row,int col,vector<vector<int>> &vis,vector<vector<char>> &grid){
    vis[row][col] = 1;
    queue<pair<int,int>> q;
    q.push({row,col});
    int n = grid.size();
    int m = grid[0].size();

    while(!q.empty()){

        int row = q.front().first;
        int col = q.front().second;
        q.pop();

        //traverse in the neighbours and mark them if its land
        for(int delrow = -1; delrow<=1 ;delrow++){
            for(int delcol = -1; delcol<=1 ;delcol++){
                int nrow = row + delrow;
                int ncol = col + delcol;

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && grid[nrow][ncol]=='1' && vis[nrow][ncol] != 0){
                    vis[nrow][ncol] = 1;
                    q.push({nrow,ncol});
                }
            }
        }
    }
}

int numIsland(vector<vector<char>> &grid){
    int n = grid.size();
    int m = grid[0].size();
    
    vector<vector<int>> vis(n,vector<int>(m,0));
    int cnt;
     
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            if(vis[row][col] != 0 && grid[row][col]){
                cnt++;
                bfs(row,col,vis,grid);
            }
        }
    }

    return cnt;
}



int main()
{
    return 0;
}