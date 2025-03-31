//ik chij in multiple forms ex. u are in different forms for different ppl , sister , doughter , friend , student
/*
two types
run time(we get to know about after running the code) STATIC &
compile time(we know about forms during compile already pahle se) DYNAMIC



*/
/*
//FUNCTION OVERLOADING :only change in input arguments
#include<iostream>
using namespace std;
class A
{
public:
    void print()
    {
        cout<<"hi yukti"<<endl;
    }
    int print(string name)
    {
        cout<<"hi "<<name<<endl;
        return 1;
    }
    void print(char name)
    {
        cout<<"hello "<<name<<endl;
    }
};

int main()
{
    A a;
    a.print();
    a.print("yashu");
    a.print("yamini");
}
*/
//OPERATOR OVERLOADING
/*
#include<iostream>
using namespace std;
class A
{
public:
    int data;

    void operator-(A obj)
    {
        cout<<"result is: "<<this->data * obj.data<<endl;
        cout<<"hello bolo hello";
    }
};

int main()
{
    A a , b;
    a.data = 2;
    b.data = 4;
    a-b;
}

--------------------------------------------------
#include<iostream>
using namespace std;
class A
{
public:
    int data;
    int lenght;



    A operator*(A obj)
    {
        A temp;
        temp.data = this->data - obj.lenght;
        return temp;

    }

    void display()
    {
        cout<<"total data is: "<<data;
    }
};

int main()
{
    A a , b, c;
    a.data = 3;
    b.lenght = 23;
    c = a*b;
    c.display();
}
*/
