#include<iostream>
#include <vector>

using namespace std;
int main()
{   
    vector<vector<int>> mat
    {
        {1, 2, 3},
        {4, 5, 6}
    };

    vector<int> abc;
    cout<<" Size of Matrix is : "<<mat.size()<<endl;
    cout<<" Size of vector is : "<<abc.size()<<endl;
    return 0;
}