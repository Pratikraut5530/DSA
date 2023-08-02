#include<iostream>
using namespace std;

int factorial(int n){
    if (n==0) // mandatory to return base case
        return 1;
    

    int smallerProblem = factorial(n-1);
    int biggerProblem = n * smallerProblem;
    
    return biggerProblem;
}

int count(int n){
    if(n==0){
        return 1;
    }

    //recursive relation
    count(n-1);
    cout<<n<<" ";
}

int main()
{
    // int n;
    // cin>>n;
     
    // int ans = factorial(n);
    // cout<<ans<<endl;

    count(6);

    return 0;
}