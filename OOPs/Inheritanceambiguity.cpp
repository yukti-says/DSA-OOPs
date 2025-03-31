//if u have same functions with same name so use :: to get it more clear
#include<iostream>
using namespace std;
class A
{
public:
    void print()
    {
        cout<<"i am in class A"<<endl;

    }
};
class B
{
public:
    void print()
    {
        cout<<"i am in class B"<<endl;
    }
};

class C : public A , public B
{

};
int main()
{
    C c;
    // c.print(); error for ambiguous so
    c.A::print();
    c.B::print();
}
