#include<iostream>
#include<string>
using namespace std;

int min(int x,int y){
    return ( x < y ) ? x : y;
}

int utility(string str,int i,int j){
    //base case
    if(i>=j){
        return 0;
    }

    //condition check weather given characters forms a palindrome or not
    if(str[i]==str[j]){
        //calling the function recursively
        return utility(str,i+1,j-1);    
    }

    //if the elememts are not same then add 1 to sum and perform recursion on further elements
    return 1 + min(utility(str,i+1,j),utility(str,i,j-1));
}

int min_del(string str){
    //creating a new recursive function by passing the recurive function
    return utility(str,0,str.length()-1);
}

int main()
{
    string str = "abefbac";
    cout << "Minimum element of deletions = "<< min_del(str) << endl;
    return 0;
}