#include<iostream>
using namespace std;

bool isPalindrome(int x){
    if(x<0){
        return false;
    }
    long reversed = 0;
    int original=x;

    while(x!=0){
        int digit=x%10;
        reversed=reversed*10+digit;
        x=x/10;
    }
    return (original==reversed);
}

int main()
{
    int x=121;
    if(isPalindrome(x)){
        cout<<"Is Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
    return 0;
}