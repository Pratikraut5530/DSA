#include<iostream>
using namespace std;

int fib(int n){
    if (n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int ans = fib(n-1) + fib(n-2);
    cout<<ans<<" ";
    return ans;
}

int main()
{
    fib(4);
    return 0;
}