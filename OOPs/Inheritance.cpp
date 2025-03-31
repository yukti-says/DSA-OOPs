/*
parent - child
base  - inherited
main - sub class

-----------
how to inherit
CLASS PARENT_CLASS{
}

CLASS CHILD_CLASS : ACCESS_MODIFIER PARENT_CLASS_NAME{
}

telling in which mode u wanna inherit the parent class
-------------------------------------
if any attribute is private in base class and u r inheriting it with public mode than u can not access its members
super class                  sub class
access modifier here         mode of inheritance
public                         public       -> public
public                         private      -> private
public                         protected    -> protected
protected                      public       -> protected
protected                      protected    ->protected
protected                      private      -> private
private                        public       ->private
private                        protected    -> private
private                        private      -> private
thus private member of any class can not be inherited directly
*/
/*
//THIS IS PUBLIC MODE : if any attribute is public in base class and any child class is inheriting this with public mode so the result will also be public
#include<iostream>
using namespace std;
class human
{
public:
    int age;
    int weight;
    int height;

public:
    void setage(int age){
    this->age = age;
    }
    int getage()
    {
        return this->age;
    }
};

class man : public human
{
public:
    string name;
    int id;
public:
    void setname(string name){
    this->name = name;
    }

    string gername()
    {
        return this->name;
    }
    void print()
    {
        cout<<"the name of the man is: "<<this->name<<endl;
        cout<<"the age of this man is: "<<this->age<<endl;
    }
};


int main()
{
    man m1 , m2;
    m1.setname("ayush");
    m2.setname("ankush");
    m1.setage(34);
    m2.setage(45);
    m1.print();
    m2.print();

}

*/

/*

//public to protected -> protected is similar to private , mean only child class can access,mean not set and get u have to write in within class

#include<iostream>
using namespace std;
class human
{
public:
    int age;
    int weight;
    int height;

public:

};

class man : protected human
{
public:
    string name;
    int id;
public:
    void setname(string name){
    this->name = name;
    }

    string getname()
    {
        return this->name;
    }
    void setage(int age){
    this->age = age;
    }
    int getage()
    {
        return this->age;
    }
    void print()
    {
        cout<<"the name of the man is: "<<this->name<<endl;
        cout<<"the age of this man is: "<<this->age<<endl;
    }
};


int main()
{
    man m1 , m2;
    m1.setname("ayush");
    m2.setname("ankush");
    m1.setage(34);
    m2.setage(45);
    m1.print();
    m2.print();

}

*/
//PUBLIC AND PRIVATE :used in class and not outside
#include<iostream>
using namespace std;
class human
{
public:
    int age;
    int weight;
    int height;

public:

};

class man : private human
{
public:
    string name;
    int id;
public:
    void setname(string name){
    this->name = name;
    }

    string getname()
    {
        return this->name;
    }
    void setage(int age){
    this->age = age;
    }
    int getage()
    {
        return this->age;
    }
    void print()
    {
        cout<<"the name of the man is: "<<this->name<<endl;
        cout<<"the age of this man is: "<<this->age<<endl;
    }
};


int main()
{
    man m1 , m2;
    //u can not do this m1.height
    m1.setname("ayush");
    m2.setname("ankush");
    m1.setage(34);
    m2.setage(45);
    m1.print();
    m2.print();

}
//private in main so child class me bhi members ka no use no accessible
