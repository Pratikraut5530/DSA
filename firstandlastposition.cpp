#include<iostream>
using namespace std;

// mid = s + (e-s)/2;

int firstOcc(int arr[],int n , int key){
    int s=0 ,e =n-1 ;
    int mid = s + (e-s)/2;
    int ans =-1;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid ;
            e= mid-1;
        }

        if(key > arr[mid]){
            s = mid+1;
        }
        else if(key < arr[mid]){
            e= mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[],int n , int key){
    int s=0 ,e =n-1 ;
    int mid = s + (e-s)/2;
    int ans =-1;

    while(s<=e){
        if(arr[mid]==key){
            ans = mid ;
            s = mid+1;
        }

        if(key > arr[mid]){
            s = mid+1;
        }
        else if(key < arr[mid]){
            e= mid-1;
        }
        mid = s + (e-s)/2; 
    }
    return ans;
}

int main()
{
    int even[11]={1,2,3,3,3,3,3,3,3,5};
    cout<<"first occurence of 3 is at index  "<<firstOcc(even ,10 ,3 )<<endl; 
    cout<<"last occurenec of 3 is at index "<<lastOcc(even , 10 , 3)<<endl;
    return 0;
}