#include<iostream>
using namespace std;

int score = 15;

void b(int &i){
    cout<<i<<endl;
    cout<<score<<endl;
    score++;

}

void a(int &j){
    cout<<j<<endl;
    b(j);
    cout<<score<<endl;
}

int main()
{
    int i = 5;
    a(i);
    cout<<score<<endl;
    return 0;
}