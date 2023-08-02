#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }

};

class Dog : public Animal{

};

class GermanShepherd : public Dog{

};


int main()
{
    Dog d;
    d.speak();

    cout<<endl;
    GermanShepherd g;
    g.speak();

    return 0;
}