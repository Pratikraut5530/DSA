#include<iostream>
using namespace std;

int getPivot(int arr[],int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start<end){
        if(arr[mid]>arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}

int binarySearch(int arr[],int start,int n,int key)
{
    int end = n-1;
    int mid = (start + end) /2 ;

    while (start <= end ){
        if (arr[mid] == key){
            return mid;
        }
        if (key> arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = (start +end )/2;
    }
    return -1;
}

int findPosition(int arr[],int n,int key){
    int pivot = getPivot(arr,n);
    if(key>=arr[pivot] && key<=arr[n-1]){
        return binarySearch(arr,pivot,n,key);
    }
    else{
        return binarySearch(arr,0,pivot,key);
    }
}

int main()
{
    int arr[19]= {1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1};

    cout<<"pivot is "<<getPivot(arr,19)<<endl;

    if (findPosition(arr,19,2)==-1){
        cout<<"key is absent"<<endl;
    }
    else{
        cout<<"key is present"<<endl;
    }
    return 0;
}