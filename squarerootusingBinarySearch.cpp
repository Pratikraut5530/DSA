#include<iostream>
using namespace std;

int squareRoot(int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end -start )/2 ;
    // LONG LONG INT JUST TO FIT NUMBER IN INTEGER RANGE

    int ans = -1 ;
    while(start<=end){
        int square = mid * mid;

        if(square == n){
            return mid;
        }
        if(square<n){
            ans = mid ;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

double morePrecision(int n,int precision,int number){
    double factor = 1;
    double ans = number;

    for(int i=0;i<precision;i++){
        factor = factor / 10;
        for(double j=ans;j*j<n;j=j+factor){
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int number = squareRoot(37);
    cout<<"square root of given number is "<<number<<endl;

    double answer=morePrecision(37,4,number);
    cout<<"Final answer is "<<answer<<endl;

    return 0;
}