#include<iostream>
#include<stack>
using namespace std;
int main()
{

    stack<int> s;

    //push operation
    s.push(2);
    s.push(3);

    //pop
    s.pop();

    cout<<"Top element in stack is: "<<s.top()<<endl;
    cout<<"is stack empty : "<<s.empty()<<endl;

    return 0;
}