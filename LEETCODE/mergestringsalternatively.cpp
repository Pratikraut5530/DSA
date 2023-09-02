#include<iostream>
using namespace std;

string mergeAlternately(string word1,string word2){
    int i = 0;
    int j = 0;
    string ans="";

    while(i<word1.size() && j<word2.size()){
        ans+=word1[i++];
        ans+=word2[j++];
    }

    while(i<word1.size()){
        ans+=word1[i++];
    }

    while(j<word2.size()){
        ans+=word2[j++];
    }

    return ans;

}

int main()
{
    string word1 = "abc";
    string word2 = "pqr";

    string ans = mergeAlternately(word1,word2);
    cout<<ans<<endl;
    return 0;
}