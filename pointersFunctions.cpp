#include<iostream>
using namespace std;

void print(int *p){
    cout<<p<<endl;
    cout<<*p<<endl;
}

void update(int *p){
   *p=*p+1;
   *p=*p+1;

}

int getSum(int *arr,int n){
    int sum=0;

    cout<<"size of "<<sizeof(&arr[0])<<endl;

    for(int i=0;i<n;i++){
        sum = sum+arr[i];
    }
    return sum;
}

int main()
{
    int value = 5;
    int *p= &value;
    print(p);
    update(p);
    print(p);

    int  arr[5]={1,2,3,4,5};
    int a = getSum(arr+2,3);
    cout<<"addition of the elements of array is "<<a<<endl;
    return 0;
}