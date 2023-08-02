#include<iostream>
#include<string.h>
using namespace std;

class Hero{
    public:
    int health;
    char level;
    char *name;
    static int timeToComplete;

    //default constructor
    Hero(){
        cout<<"Constructor called!!!"<<endl;
        name = new char[100];
    }

    //parameterised constructor
    Hero(int health,char level){
        cout<<"this ->"<<this<<endl;
        this->health= health;
        this->level = level;
    }

    // copy constructor deep copy constructor
    Hero(Hero& temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch ;
        cout<<"copy constructor called"<<endl;
        this->health= temp.health;
        this->level = temp.level;

    }

    void print(){
        cout<<endl;
        cout<<"Health inside print function is : "<<this->health<<endl;
        cout<<"Level inside print function is : "<<this->level<<endl;
        cout<<"Name inside print function is : "<<this->name<<endl;
        cout<<endl;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

    void setHealth(int health){
        this->health = health;
    }

    void setLevel(char level){
        this->level = level;
    }

    int getHealth(){
        return health;
    }

    int getLevel(){
        return level;
    }

    static int random(){
        timeToComplete++;
        return timeToComplete;
    }

    ~Hero(){
        cout<<"Destructor bhai called"<<endl;
    }


};

int Hero::timeToComplete = 5;

int main()


{

    cout<<Hero::random()<<endl;

    cout<<"without creating an object : "<<Hero::timeToComplete<<endl;

    Hero a;
    cout<<"with creating an object : "<<a.timeToComplete<<endl; //practice




    // Hero a;

    // Hero *b = new Hero;
    // //manually descrtor call for dynamic allocated memory
    // delete b;


    // Hero hero1;
    // hero1.setHealth(12);
    // hero1.setLevel('D');
    // char name[7]="Babbar";
    // hero1.setName(name);
    // // hero1.print();

    // // use defaukt copy constructor to copy hero1 object to another object
    // Hero hero2(hero1);
    // // hero2.print();

    // hero1.name[0]='G';
    // hero1.print();

    // hero2.print();

    // hero1=hero2;
    // cout<<"this is hero1"<<endl;
    // hero1.print();

    //default copy constructor follows shallow copy meaning it follows access same memory that of the previous object has
    //in order to overcome this we need to follow deep copy where a copy of the previos object memory is created and it can be accessed
    //for this we need to create a copy constructor of our own;



    // Hero suresh(70,'C');
    // suresh.print();

    // //copy constructor
    // Hero r(suresh); //copying of the suresh object to r object
    // r.print();
    

    // Hero ramesh(50,'A');
    // cout<<"Address of ramesh is : "<<&ramesh<<endl;

    // cout<<"Health is : "<<ramesh.health<<endl;
    // cout<<"Level is : "<<ramesh.level<<endl;

    // ramesh.print();
    return 0;
}