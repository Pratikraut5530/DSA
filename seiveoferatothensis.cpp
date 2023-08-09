#include<iostream>
using namespace std;

void seiveprime(int n,int count){

    int prime[n+1]={0};
    
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }

    //counting all the prime numbers
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<endl;
            count++;
        }
    }

    cout<<count<<endl;
}

int main()
{
    int count=0;
    int n=9;
    seiveprime(n,count);
    return 0;
}