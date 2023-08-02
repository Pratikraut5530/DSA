#include<iostream>
using namespace std;

void sortArray(int arr[],int n){
    if(n==0 || n==1){
        return ;
    }

    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            int temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1]=temp;
        }
    }

    sortArray(arr,n-1);
}

int main()
{
    int arr[5]={2,5,1,6,9};

    sortArray(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}