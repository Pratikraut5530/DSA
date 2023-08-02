#include<iostream>
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

int main()
{
    cout<<"charcter is "<<toLowercase('C')<<endl;
    cout<<"charcter is "<<toLowercase('a')<<endl;
    return 0;
}