#include<iostream>
using namespace std;

class Human{
    public:
    int height;
    public:
    int weight;
    int age;


    public:
    int getAge(){
        return this->age;
    }

    void setWeight(int weight){
        this->weight =weight;
    }

    void setHeight(int height){
        this->height =height;
    }

    void setAge(int age){
        this->age = age;
    }


};

class Male : public Human{
    public:
    string color="Black";

    void sleep(){
        cout<<"Male Sleeeping"<<endl;
    }
};

int main()
{
    Male object1;
    object1.setAge(22);
    object1.setHeight(5);
    object1.setWeight(70);

    cout<<"Age of male is "<<object1.age<<endl;
    cout<<"Weight of male is "<<object1.weight<<endl;
    cout<<"Height of male is "<<object1.height<<endl;

    cout<<object1.color<<endl;
    object1.sleep();
    
    return 0;
}