#include<iostream>
using namespace std;

int climbSteps(int src,int dest){
    cout<<"source "<<src<<" Destination "<<dest<<endl;


    if(src<0){
        return 0;
    }

    if(src == dest ){
        cout<<"phoch gaya"<<endl;
        return ;
    }

    

    
}

int main()
{
    int src=0;
    int dest=10;

    climbSteps(src,dest);
    return 0;
}