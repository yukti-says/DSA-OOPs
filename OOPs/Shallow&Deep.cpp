#include<iostream>
#include<string.h>
using namespace std;

class hero
{
    //propeties
private:
    int health;

public:
    char * name;
    char level;


    hero()
    {
        cout<<"single constructor called."<<endl;
        name = new char[100];  //create dynamically

    }
    //create copy constructor of ur own
    hero( hero & temp)
    {
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch , temp.name);
        cout<<"this is copy constructor"<<endl;
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }

    void setname(char name[])
    {   //current pointer me copy
        strcpy(this->name , name);
    }
    void sethealth(int health)
    {
        this->health = health;
    }
    void setlevel(char level)
    {
        this->level = level;
    }

    int gethealth()
    {
        return health;
    }

    char getlevel()
    {
        return level;
    }

    void print()
    {
        cout<<"name is: "<<this->name<<endl;
        cout<<"health is: "<<this->health<<endl;
        cout<<"level is: "<<this->level<<endl;
    }


};
int main()
{
    hero hero1;
    hero1.sethealth(34);
    hero1.setlevel('r');
    char name[9] = "yukti";
    hero1.setname(name);
    hero1.setname("kusum"); //here u have made change is hero1 but it is affecting hero 2 as well so this copy done by default is shallow copies
    hero1.print();

    //copying values use default

    //hero hero2(hero1);
    hero hero2 = hero1;
    hero2.name = "vardam"; //this can be also written
    hero2.print();

    hero1 = hero2; //this is copy assignment operator
    hero1.print();
    hero2.print();
}
/*
copy assignment operator hero2 = hero1 when two objects are created then u want to make copy

*/
