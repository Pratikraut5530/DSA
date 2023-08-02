#include<iostream>
using namespace std;


int getSum(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    char *ch =  new char;
    char a = 'z';
    cout<<sizeof(a)<<endl;

    char *b = &a;
    cout<<sizeof(b)<<endl;

    int n;
    cin>>n;
    int *arr = new int[n]; // memory allocation in heap for array and pointer is allocated in stack

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;

    cout<<"addition of elements of array is "<<getSum(arr,n)<<endl;

    while (true){
        int *ptr= new int;
        delete ptr;
    }
    return 0;
}