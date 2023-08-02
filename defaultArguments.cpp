#include<iostream>
using namespace std;

const int a=5;

void print(int arr[],int n,int start = 0){ //here start=0 is default argument
    for(int i=start;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}
 
int main()
{
    int arr[5]={1,2,3,4,5};
    print(arr,5); //i need to make this argument optional if someone passes
    //it take it or print all array
    cout<<a<<endl;
    return 0;
}