#include<iostream>
#include<vector>
using namespace std;

void print(vector<vector<int>> &matrix){
    int n = matrix.size();

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

void shortest_distance(vector<vector<int>> &matrix){
    int n = matrix.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j] == -1){
                matrix[i][j] = 1e9;
            }
            if(i == j){
                matrix[i][j]=0;
            }
        }
    }


    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j] = min(matrix[i][j],matrix[i][k]+matrix[k][j]);
            }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j] == 1e9){
                matrix[i][j] = -1;
            }
        }
    }

}

int main()
{
    vector<vector<int>> matrix = {{0,1,43},
                                  {1,0,6},
                                  {-1,-1,0}};
    
    print(matrix);
    shortest_distance(matrix);
    print(matrix);
    return 0;
}