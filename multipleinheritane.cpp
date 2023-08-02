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

class GermanShepherd : public Dog , public Animal{

};


int main()
{
    Dog d;
    d.run();

    GermanShepherd a;
    a.Animal::run();
    a.bark();
    return 0;
}