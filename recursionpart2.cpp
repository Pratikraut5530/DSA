#include<iostream>
using namespace std;

void reachHome(int src,int dest){
    cout<<"source "<<src<<" destination "<<dest<<endl;

    if(src==dest){
        cout<<"pohoch gaya"<<endl;
        return ;
    }
    src++;

    reachHome(src,dest);
}

int main()
{
    int src=1;
    int dest=10;
    
    cout<<endl;

    reachHome(src,dest);
    return 0;
}