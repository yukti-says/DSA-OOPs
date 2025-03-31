#include<iostream>
using namespace std;


class hero{
    public:
int number;
string name;
void print()
{
    cout<<"hello there";
}

};

int main()
{
    hero yash;
    //create dynamically objects
    /*
    int *ptr = new int;
    hero *h = new hero;  //same

    //access through pointers
    *(h).age;
    or
    h->age;
    */
   // cout<<"size of object yash: "<<sizeof(yash);  //size is 40 read alignment and padding concept for clarity
    //empty class object size is one

    yash.name = "ritu";
    //cout<<yash.print()<<endl;
    cout<<yash.name<<endl;


}


