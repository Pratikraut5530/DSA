#include<iostream>
using namespace std;

bool checkPalindrome(string str,int i,int j){

    cout<<str<<" "<<i<<" "<<j<<endl;

    if(i>j){
        return 0;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        i++;
        j--;
        checkPalindrome(str,i,j);
        return true;
    }
}

int main()
{
    string name = "nitin";
    cout<<endl;

    bool isPalindrome = checkPalindrome(name,0,name.length()-1);

    if(isPalindrome){
        cout<<"Is a palindrome"<<endl;
    }
    else{
        cout<<"is not a palindrome"<<endl;
    }

    return 0;
}