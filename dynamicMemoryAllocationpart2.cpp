#include<iostream>
using namespace std;
int main()
{
    int row;
    cin>>row;

    int column;
    cin>>column;

    int **arr = new int*[row]; // storing int* pointer in the array created 
    //and that int* is used to create the column

    for(int i=0;i<row;i++){
        arr[i]= new int[column];
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>arr[row][column];
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<arr[row][column]<<" ";
        }cout<<endl;
    }

    for(int i=0;i<row;i++){
        delete []arr[i];    //deleting the internal assigned memory
    }

    delete []arr; // deleting the pointer memory
    return 0;
}