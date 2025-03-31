//class a inherited by  b , b inherited by c like this
#include<iostream>
using namespace std;
class animal
{
public:
    string sound;
    int years;
    string name;

};
class dog : public animal
{  public:
    int age;
    int number;
    void setname(string name){
    this->name = name;
    }

    string getname(){
    return this->name;
    }

    void setsound(string sound){
    this->sound = sound;
    }

    string getsound(){
    return this->sound;
    }

};

class cat : public dog
{
public:
    void setage(int age)
    {
        this->age = age;
    }
    int getage()
    {
        return this->age;

    }

};


int main()
{
    dog d;
    d.setname("tommy");
    cout<<"dog name is: "<<d.getname()<<endl;
    cat c;
    c.setname("maui");
    c.setsound("muy");
    c.setage(12);
    cout<<"age of cat is: "<<c.getage()<<endl;
    cout<<"cat name is: "<<c.getname()<<endl;
    cout<<"cat sound is: "<<c.getsound();
}
