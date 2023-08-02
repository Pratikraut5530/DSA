#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> nums1{1,2,3,0,0,0};
    int m=6;
    vector<int> nums2{2,5,6};
    int n=3;

    vector<int> nums3(m);

    int i=0,j=0,k=0;
    
    while(i<m && j<n){

        if( nums1[i] < nums2[j]){
            nums3[k] = nums1[i];
            k++;
            i++;
        }
        else{
            nums3[k] = nums2[j];
            k++;
            j++;
        }

    }

    while( i < m){

        nums3.push_back(nums1[i]);
        k++;
        i++;
    }

    while( j < n){

        nums3.push_back(nums2[j]);
        k++;
        j++;

    }

    for(int i=0;i<(m);i++){
        cout<<nums3[i]<<" ";
    }
    cout<<endl;



    cout<<"Hello World"<<endl;
    return 0;
}