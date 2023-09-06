#include<iostream>
using namespace std;

int isPalindrome(char  S[]){   
    int n = S.length();
        
    int start = 0;
    int end= n-1;
        
    while(start<=end){
        if(S[start]!=S[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}

int main()
{
    char S[]={'a','b','c'};
    if(isPalindrome(S)){
        cout<<"Is Palindrome"<<endl;
    }
    else{
        cout<<"Is not Palindrome"<<endl;
    }
    return 0;
}