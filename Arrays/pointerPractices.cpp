#include<iostream>
using namespace std;
int main(){
int a=90;
int c;
int *p;

p=&a;
(*p)++;
cout<<a<<" "<<*p<<endl;

}
