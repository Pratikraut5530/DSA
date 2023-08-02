#include<iostream>
using namespace std;

class Hero{


    private:
    int health=20;
    char level;

    public:

    Hero(){
        cout<<"Constructor called!!!"<<endl;
    }

    int getHealth(){
        return health;
    }

    void setHealth(int n){
        health = n;
    }

    char getlevel(){
        return level;
    }

    void setlevel(char ch){
        level = ch;
    }
};

int main()
{

    Hero ramesh;

    Hero *h = new Hero;

    // //dynamic allocation
    // Hero *b = new Hero;
    // b->setHealth(45);
    // b->setlevel('C');
    // cout<<"Health is "<<b->getHealth()<<endl;
    // cout<<"Level is "<<b->getlevel()<<endl;




    // //static allocation
    // Hero ramesh;
    // cout<<"Size of Ramesh is:"<<sizeof(ramesh)<<endl;

    // // cout<<"Health is : "<<ramesh.health<<endl;
    // // cout<<"Level is : "<<ramesh.level<<endl;

    // //getting health through getter and setter while in private access modifier
    // cout<<"Health is : "<<ramesh.getHealth()<<endl;
    // ramesh.setHealth(70);
    // cout<<"Health is : "<<ramesh.getHealth()<<endl;

    // cout<<"Level is : "<<ramesh.getlevel()<<endl;
    // ramesh.setlevel('A');
    // cout<<"Level is : "<<ramesh.getlevel()<<endl;


    return 0;
}