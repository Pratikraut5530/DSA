#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void run(){
        cout<<"Running"<<endl;
    }

};

class Dog : public Animal{
    
    public:
    void bark(){
        cout<<"Barking"<<endl;
    }
};

class Cow : public Animal{
    public:
    void bow(){
        cout<<"Bowwwwwing"<<endl;
    }
};

int main()
{
    Cow bakula;
    bakula.run();
    bakula.bow();
    return 0;
}