#include<iostream>
using namespace std;

bool binarySearch(int arr[],int s,int e ,int key){
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;


    if(arr[mid]==key){
        return true;
    }

    if(arr[mid]<key){
        return binarySearch(arr,mid+1,e,key);
    }
    else{
        return binarySearch(arr,s,mid-1,key);
    }
}


int main()
{
    int arr[6]={2,4,6,10,14,18};
    int size=6;
    int key =18;

    bool ans = binarySearch(arr,0,5,18);
    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }

    return 0;
}