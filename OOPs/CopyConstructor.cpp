#include<iostream>
using namespace std;
class hero
{
private:
    int age;

public:
    int health;
    string name;

void setage(int a)
{
    a = age;
}
int getage()
{
    return age;
}
//so here i myself created a non parameterized constructor so this will run if i just create an object like hero h but if i would not have created this this will throw error
hero()
{
    cout<<" i am a default constructor"<<endl;

}


hero(string name , int health,int age)
{
    this->name = name;
    this->health = health;
    this->age = age;
}

//make ur own copy constuctor
hero(hero &temp) //passing by reference that it should not stuck in loop of making copies of passed constructor and then copying it through copy constructor so all work should be from one particular address
{   cout<<"this is copy constructor"<<endl;
    this->age = temp.age;
    this->health = temp.health;
    /*
    so u can see here u have not copies name here and when u passed default copy constructor is no more so how u have created copy constructor it will work accordingly


    */
}
void print()
{
    cout<<"name is: "<<this->name<<endl; //using this for clearing confusion
    cout<<"health is: "<<this->health<<endl;
    cout<<"age is: "<<this->age<<endl;
}


};

int main()
{
    hero s("yukti" , 100,20);
    s.print();

    //copy constructor if u have not created ur so default will work
    hero r(s);
    r.name = "raj";

    /*how it looks
     r.name  = s.name
     r.health =s.health
     r.age = s.age
     */
    r.print();
}

/*
two concepts
SHALLOW COPY : so jo default copy  constructor h wo shallow copy karta h,same memory location is shared by two objects
DEEP COPY : creates a actual copy, we create copy constructor




*/
