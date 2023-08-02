#include<iostream>
using namespace std;
int main()
{
    int data = 5;
    int *num=&data;
    cout<<"size of integer : "<<sizeof(*num)<<endl;
    cout<<"size of address : "<<sizeof(num)<<endl;

    int *copy= num;
    cout<<*copy<<endl;


    // pointer arithmetic
    int i =3;
    int *t = &i;
    cout<<&i<<endl;
    *t = *t + 1;
    cout<<*t <<endl;
    cout<<&i<<endl;
    
    
    return 0;
}