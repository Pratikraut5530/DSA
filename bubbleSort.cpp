#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            // PROCESS ELEMENT TILL N-1 INDEX
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main()
{
    int a = 10;
    int b = 20;
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    int arr[9]={4,8,1,6,3,2,10,69,12};
    bubbleSort(arr,9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}