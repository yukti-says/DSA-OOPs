/*
creates a data member which belongs to class,to access this we dont need to create object
static functions -> no need to create objects , no this keyword here bz no object here,can only access static members

*/
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
    static int timetocomplete;  //we gonna take it as static


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

 static int random()
 {
     return timetocomplete;
     // return this->health ; this will through error
 }




};
int hero ::timetocomplete = 5; //this is initialization of it used :: scope resolution operator[datatype name class name :: field/variable name]

int main()
{
  //print static variable
  //cout<<hero::timetocomplete;

  //we can also access it with object creation but this does not belongs to objects it belongs to class
  //hero w;
  //cout<< w.timetocomplete; //this is not preferable
  cout<<hero::random();
}
