#include<iostream>
#include<vector>
using namespace std;

bool traverse(int row,int col,vector<vector<char>> grid,vector<vector<int>> &ans,int cnt,string word){
        
    if(grid[row][col]==word[word.length()-1]){
        return false;
    }
        
    int wordlen = word.length();
    int n = grid.size();
	int m = grid[0].size();
	cnt++;
	    
    for(int delrow=-1;delrow<=1;delrow++){
        for(int delcol=-1;delcol<=1;delcol++){
            int nrow = row+delrow;
            int ncol = col+delcol;
                
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && cnt<wordlen && grid[nrow][ncol]==word[cnt]){
                traverse(nrow,ncol,grid,ans,cnt,word);
            } 
        }
    }
    return true;
}

vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    // Code here
	int wordlen = word.length();
	int n = grid.size();
	int m = grid[0].size();
	int cnt=0;
	vector<vector<int>> ans(n,vector<int>(m));
	    
	for(int row=0;row<n;row++){
	    for(int col=0;col<m;col++){
	        if(grid[row][col]==word[cnt]){
	            if(traverse(row,col,grid,ans,cnt,word)==true){
	                ans[row].push_back(row);
	                ans[row].push_back(col);
	            }
	        }
	    }
	}

    return ans;
	    
}

void print(vector<vector<char>> grid){
    int n= grid.size();
    int m= grid[0].size();
    
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            cout<<grid[row][col]<<" ";
        }
        cout<<endl;
    }
}

void display(vector<vector<int>> ans){
    int n= ans.size();
    int m= ans[0].size();
    
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            cout<<ans[row][col]<<" ";
        }
        cout<<endl;
    }

}

int main()
{
    vector<vector<char>> grid
    {
        {'a','b','a','d'},
        {'a','b','e','b'},
        {'e','b','e','b'}
        
    };
    print(grid);

    string word="abe";

    vector<vector<int>> ans = searchWord(grid,word);
    display(ans);
    
    return 0;
}