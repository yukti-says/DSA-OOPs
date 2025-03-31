/*
wrapping up data members and functions into a single unit,which here is called as class
to achieve fully encapsulation class all members and functions should be in private mode that u can access this into that class only
directly
----------
why:
this is information hiding/data hiding
and similar to this ABSTRACTION : is implementation hiding
increase security
read only marked on class
code reusuability
unit testing
*/
#include<iostream>
using namespace std;

class student
{
private:
    int age;
    string name;
    int rollno;

public:
/*
so were having a doubt here that whether we can use this keyword with functions or not so we can and it is a good practise

*/
    void setrollno(int rollno){
    this->rollno = rollno;
    }
    int getroll(){
    return rollno;}
};

int main()
{
    student s , u, v;
    s.setrollno(34);
    cout<<"student roll no is: "<<s.getroll()<<endl;
     u.setrollno(340);
    cout<<"student roll no is: "<<u.getroll()<<endl;
     v.setrollno(308);
    cout<<"student roll no is: "<<v.getroll();

}
