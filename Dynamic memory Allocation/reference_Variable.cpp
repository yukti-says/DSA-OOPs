// reference variable is another name for already created variable, which points to same memory location

#include<iostream>
using namespace std;
/*
{

    int i=45;
    int &j=i; //&j is a reference variable of i. both pointing to same location
    cout<<i<<" "<<j<<endl;
    i++;
    j++;
    cout<<i<<" "<<j;
}
*/

/*
int add(int &i,int &j){
int r=i+j;
return r;

}

int main()
{
    int k=4,m=4;
    int r=add(k,m);
    cout<<r<<endl;
}
*/

/*
void up(int &s){
s++;
}
int main()
{
    int k=90;
    cout<<"before update: "<<k<<endl;
    up(k);
    cout<<"after update: "<<k<<endl;

}
*/

//some dangerous practices are:
/*
1. do not create reference variable of a local variable in a function and return it, bz as the function will end the variable get destroy so you will have nothing to return
2. same with pointer if created of any local variable of any function and return it
*/

int &func(int a){
int n=a;
int &ans=n;
return ans; // u r retuning reference of a local variable- gets a warning
}

int *pointer(int n){
int *ptr=&n;
return ptr;  //returning pointer to a local variable
}
