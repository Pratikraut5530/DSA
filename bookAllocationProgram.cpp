#include<iostream>
using namespace std;

bool isPossible(int arr[],int n,int m,int mid){
    int student_count = 1;
    int pageSum = 0;

    for(int i=0;i<n;i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            student_count++;
            if(student_count> m || arr[i]>mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[],int n,int m){
    int s=0;
    int sum = 0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid = s+ (e-s)/2;

    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            e = mid -1;
        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int arr[4]={10,20,30,40};
    // m number of students,n = number of books 
    int a =allocateBooks(arr,4,2);
    cout<<a;
    return 0;
}