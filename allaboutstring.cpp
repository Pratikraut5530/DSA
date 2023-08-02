#include<iostream>
#include<string.h>
using namespace std;

char toLowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        int temp = ch - 'A';
        return temp+'a';
    }
}

bool checkPalindrome(char a[],int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        if(toLowercase(a[s]) != toLowercase(a[e])){
            return 0;
        }
        else{
            if((a[s]>=INT16_MIN && a[s]<=INT16_MAX) && (a[e]>=INT16_MIN && a[e]<=INT16_MAX)){
                s++;
                e--;
            }
            else{
                break;
            }
        }
    } 
    return 1;  
}

void reverse(char name[],int n){
    int s =0;
    int e= n-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }
}

int getLenght(char name[]){
    int count  =0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"your name is "<<name<<endl;

    cout<<"length of string is "<<getLenght(name)<<endl;

    // reverse(name,getLenght(name));
    // cout<<"reversed string is "<<name<<endl;
    cout<<"charcter is "<<toLowercase('C')<<endl;
    cout<<"charcter is "<<toLowercase('a')<<endl;

    if(checkPalindrome(name,getLenght(name))==true){
        cout<<"string is an palindrome"<<endl;
    }
    else{
        cout<<"string is not an palindrome"<<endl;
    }


    

    return 0;
}