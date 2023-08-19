#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
    int rows = mat.size()-1;
    int cols = mat[0].size()-1;

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols-1;j++){
            if( j+1 <= cols && mat[i][j+1]!=0){
                mat[i][j+1] += mat[i][j];
            }
        }
    }

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
           if(i+1 <=rows && mat[i+1][j] != 0){
                mat[i+1][j] += mat[i][j];
            } 
        }
    }
    return mat;
}

void print(vector<vector<int>> mat){
    int rows = mat.size();
    int cols = mat[0].size();

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    vector<vector<int>> mat{{0,0,0},{0,1,0},{1,1,1}};
    print(mat);
    updateMatrix(mat);
    print(mat);
    return 0;
}