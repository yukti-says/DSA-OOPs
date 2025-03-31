//getters and setters are functions in class through which u can access the private member variables
#include<iostream>
using namespace std;

class hero
{private:
    int age;
public:
    string name;

 //getter
 int getage()
 {
     return age;  //will return age
 }

 //setter
 int setage(int a){
 age  = a;
 }
 /*
 setting setter that only user a can change the private member
 int setage(int a , string name){
 if name  =='a'
    age = a;
 }

 */


};

int main()
{
    hero h;
    //h.age = 34;
    cout<<h.getage()<<endl;
    h.setage(23);
    cout<<"age  is : "<<h.getage();
    //with the help of setter u can also provide some rules who can set particular property,apply condition for change
}
