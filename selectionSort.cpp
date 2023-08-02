#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){ //we will check upto n-1 elements as last element is not required to traverse
        int minIndex = i;

        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j ;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}

int main()
{
    int arr[5]={6,2,8,4,10};
    selectionSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}