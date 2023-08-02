#include<iostream>
using namespace std;

int& func(int a ){
    int  num =a ;
    int &ans=num; // bad practice mat karo as memory cannot be accessed
    //it can be limited for this function only;
    return ans;  
}

void update2(int &j){
    j++;
}

void update(int n){
    n++;
}

int main()
{
    int i = 5;
    int &j=i; // syntax for reference variable
    cout<<i<<endl;
    j++;
    cout<<j<<endl;
    j++;
    cout<<j<<endl;

    int n =5;
    cout<<"before "<<n<<endl;
    update2(n);
    cout<<"after "<<n<<endl;

    func(n);

    return 0;
}