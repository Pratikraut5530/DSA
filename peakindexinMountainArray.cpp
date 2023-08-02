#include<iostream>
using namespace std;

int peakIndexMountainArray(int arr[],int n){
    int start = 0;
    int end = n-1;

    int mid = start + (end -start)/2;

    while(start <=end){
        if(arr[mid]<arr[mid+1]){
            start = mid +1 ;
        }
        else{
            end = mid;
        }
    }
    return arr[mid];
}

int main()
{
    int even[4]={2,4,5,1};
    int peakindexvalue = peakIndexMountainArray(even,4);
    cout<<"peak index value is "<<peakindexvalue<<endl;
    cout<<"hello";
    return 0;
}