#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key){
    if(size==0){
        return 0;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool remainingPart= linearSearch(arr+1,size-1,key);
        return remainingPart;
    }
}

int main()
{
    int arr[5]={3,5,1,2,6};
    int size=5;
    int key=9;
    bool ans =linearSearch(arr,size,key);
    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"absent"<<endl;
    }
    return 0;
}