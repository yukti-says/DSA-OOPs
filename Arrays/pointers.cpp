//in memory there is a table= symbol table,is an imp data structure created and maintained by compiler in order to keep track of semantics of variable=scope,info about instances of various entities such as variable and function names,classes and objects
#include<iostream>
using namespace std;
int main(){
int num=5;
cout<<num<<endl;

//adress of operatore->&
cout<<"adress of num "<<&num<<endl;
//created a pointer and stored adress in it
int *ptr; //pointer to int
ptr=&num;
//ptr->adress
//*ptr->value at that adress *=dereferencing operating
cout<<ptr<<" "<<*ptr<<endl;
char *c;//pointer to charactor

cout<<"adress of num "<<sizeof(num)<<endl;
cout<<"adress of pointer ptr "<<sizeof(ptr)<<endl; //8 byte fix of any datatype

//to copied values
int n=5;
int a1=n;
a1++;
cout<<a1<<" "<<n<<endl;

//with pointers
int a=90;
int *p;

p=&a;
(*p)++;
cout<<a<<" "<<*p<<endl;

//copying a pointer ->create pointer to pointer

int *q=p;
cout<<*q<<endl;

//imp concept in pointer

int i=4;
int*t=&i;
(*t)++;
cout<<(*t)<<endl;//5
}
