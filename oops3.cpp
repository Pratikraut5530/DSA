#include<iostream>
using namespace std;
//encapsulation

class Student{

    private:
    string name;
    int age;
    int height;

    public:
    int get_age(){
        return this->age;
    }

};

int main()
{
    Student first;
    cout<<"all ok"<<endl;
    return 0;
}