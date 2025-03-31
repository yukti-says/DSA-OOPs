#include<iostream>
//#include"oop.cpp" to include any file
using namespace std;
/*
contructors are like functions which is called with the time of object creation
two type:
DEFAUL : not made by us , when we define a object dafaul contructor by compiler automatically called and we do not see it as well
         has no return type and same as class name
PARAMETERISED : we make it by ourself and also passes some parameters to it,


*/

class hero{
private:
    int age;

    public:
int number;
string name;
int health ;

 hero()
{
    cout<<"hello there, i am default  constructor"<<endl;
}

void setage(int a){
age =  a;
}

int getage(){
   return age;
   }





/*
//parameterized constructor
hero(int health){
health = health;  //now what does it mean here comes the concept of this(keyword) pointer with this the nearest variable gets the value like
//variable health in this constructor me hi health ki value ayi but we want ki health variable jo contructor me h wo hero class ke variable health me store ho
//so for this -> jo bhi current object hota h uska current address is stored in this kerword,so it is a pointer points to current object

this->health = health;
//left wala health is object ka health and right side wala health is function ka level
//so yukti current object ke health me function se aayi huii health ki value daal do , clear confusion
//cout<<"this : "<<this<<endl;

}
hero(int health , string name){
this->name  = name;
this -> health  =  health;

}

*/



void print()
{
    cout<<"print ki health is: "<<health<<endl;
}

void show()
{
    cout<<"name is: "<<name<<endl;
    cout<<"show ki health is: "<<health<<endl;
}

~hero()
{
    cout<<"\ndestructor worked"<<endl;
}

};

int main()
{  /*
    cout<<"hi there"<<endl;
    hero yukti(34) ; //with static and 34 as we have created parameterized constructor
    yukti.print();

    //cout<<"object adress: "<<&yukti<<endl;
    //cout<<"yukti health: "<<yukti.health<<endl;//34
   // cout<<"\n yes"<<endl;
   // hero *sahu = new hero; //with dynamic
   hero anayara(10);
   anayara.print();
   //cout<<"anayara health: "<<anayara.health<<endl; //10
   //try with removing this keyword and see outputs u will get more clarity

   hero * anu = new hero(90, "kusum");
   anu->show();
   anu ->print();

   hero * sheikh =  new hero(100 , "mohim");
   sheikh ->show();

*/
//copy constructor

hero yash;
//yash.setage(30);
//cout<<endl<<yash.getage();

hero *raj = new hero; //iske liye destructor automatically call nhi hua, iske manually call karna hoga
//manually call
delete raj; //now it work
   }

   //one thing to notice is if u have already created a constructor whether paramerterized or non so the default by compliler will be removed
   // so if u do hero new; this will through error bz u have created a parameterized constructor so default is removed.
   // destructor : freeing memory taken by constructors, when object goes out of scope then destructor is called and then freed memory
   //when class is created these are default created can also be created by us
//so for statically object created get default constructor not for dynamically created objects
//constant keywords , initialization list
