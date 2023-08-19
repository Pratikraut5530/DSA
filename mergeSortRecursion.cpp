#include<iostream>
using namespace std;
void merge(int arr[],int s,int e){
    int mid = s + (e-s)/2;

    int len1= mid -s +1;
    int len2=e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    
    for(int i=0;i<len1;i++){
        first[i]=arr[s+i];
    }
    for(int i=0;i<len2;i++){
        second[i]=arr[mid+1+i]; 
    }

    int index1 = 0;
    int index2=0;
    int mainArrayIndex = s;

    while(index1<len1 && index2<len2){
        if(first[index1] <= second[index2]){
            arr[mainArrayIndex] = first[index1];
            index1++;
        }
        else{
            arr[mainArrayIndex] = second[index2];
            index2++;
        }
        mainArrayIndex++;
    }

    while(index1 < len1){
        arr[mainArrayIndex]=first[index1];
        mainArrayIndex++;
        index1++;
    }

    while(index2 < len2){
        arr[mainArrayIndex]=second[index2];
        mainArrayIndex++;
        index2++;
    }


    
}

void mergeSort(int arr[],int s,int e){
    if(s>=e){
        return ;
    
    }
    int mid = s + (e-s)/2;  
    //sorting the left part
    mergeSort(arr,s,mid);

    //right part sort karna hai
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
}

int main()
{
    int arr[6]={3,2,1,6,9,11};
    int n=6     ;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl;

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
    
    return 0;
}