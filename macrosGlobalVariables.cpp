#include<iostream>
using namespace std;

#define PI 3.14 //this is an macro it does not consume any space in the memory it just delivers the data at the compile time

int main()
{
    int r= 5;
    double area = PI * r * r;
    cout<<"Area of circle of radius 5 is "<<area<<endl;
    return 0;
}