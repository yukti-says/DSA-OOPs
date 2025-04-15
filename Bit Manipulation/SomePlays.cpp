/*
doing left shift << , right shift >> and bitwise operators & , | , ~ , ^
*/
#include<iostream>
using namespace std;
int main()
{

    int a = 13;
    int b = 2;
    int c = -3;

    cout<<"left shift: "<<(a<<b)<<endl;
    cout<<"right shift: "<<(a>>b)<<endl;
    cout<<"negative of : "<<(~a)<<endl;
    cout<<"and : "<<(a&b)<<endl;
    cout<<"or: "<<(a|b)<<endl;
    cout<<"xor : "<<(a^b)<<endl;
    cout<<"-3 : "<<(~c);

}
