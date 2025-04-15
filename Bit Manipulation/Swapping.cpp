#include<iostream>
using namespace std;
int main()
{
    int a = 90;
    int b = 98;
    cout<<"before Swapping: "<<"a = "<<a<<" "<<"b = "<<b<<endl;
    a= a^b;
    b=a^b;
    a=a^b;
    cout<<"after Swapping: "<<"a = "<<a<<" "<<"b = "<<b<<endl;


}
