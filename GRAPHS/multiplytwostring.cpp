#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;

string revstr(string s){
    int start=0;
    int end=s.length()-1;

    while(start<=end){
        swap(s[start],s[end]);
        start++;
        end--;
    }

    return s;
}

void print(string s){
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    string s1 = "11";
    string s2 = "23";

    reverse(s1.begin(),s1.end());
    
    int num1 = stoi(s1);
    int num2 = stoi(s2);
    
    int total=0;
    
    for(int i=0;i<s2.length();i++){
        int digit1 = num2%10;
        num2 = num2/10;
        for(int j=0;j<s1.length();j++){
            
            int digit2 = num1%10;
            num1 = num1/10;
            total = total + (digit1*digit2);
        }
        total = total*10;
    }
    
    cout<<total<<endl;

    return 0;
}