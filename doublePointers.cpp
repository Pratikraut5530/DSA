#include<iostream>
using namespace std;
int main()
{
    int i=5;
    int *p = &i;
    int **p2 = &p;

    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    **p2= **p2 + 1;
    *p = *p +1;
    cout<<**p2<<endl;

    return 0;
}