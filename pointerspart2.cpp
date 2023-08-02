#include<iostream>
using namespace std;
int main()
{
    int arr[10]={23,122,41,67};
    cout<<"address of first memory block : "<<arr<<endl;
    cout<<"address of first memory block : "<<&arr[1]<<endl;

    // cout<<*arr<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<(*arr)+1<<endl;

    cout<<arr[2]<<endl;
    cout<<*(arr+2)<<endl;

    cout<<2[arr]<<endl;

    int temp[10];
    cout<<sizeof(temp)<<endl;

    int *ptr = &temp[0];

    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;

    char ch[6]={"abcde"};


    return 0;
}