#include<iostream>
using namespace std;

class A{

    public:
    void sayHello(){
        cout<<"Hello Pratik Raut"<<endl;
    }

    void sayHello(string name){
        cout<<"Hello "<<name<<endl;
    }

    int sayHello(string name,int n){
        cout<<"Hello "<<name<<endl;
        return 1;
    }

};

int main()
{
    A obj;
    obj.sayHello("pratik",2);
    return 0;
}