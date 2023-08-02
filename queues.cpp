#include<iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(11);
    cout<<"Front of Queue is : "<<q.front()<<endl;

    q.push(15);
    cout<<"Front of Queue is : "<<q.front()<<endl;

    q.push(13);
    cout<<"Front of Queue is : "<<q.front()<<endl;

    cout<<"Size of queue is: "<<q.size()<<endl;

    q.pop();
    q.pop();

    cout<<"Front of Queue is : "<<q.front()<<endl;

    cout<<"Size of queue is: "<<q.size()<<endl;

    q.push(13);

    q.push(15);

    q.push(17);
            
    cout<<"Front of Queue is : "<<q.front()<<endl;

    cout<<"Back of Queue is : "<<q.back()<<endl;

    if(q.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }

    return 0;
}