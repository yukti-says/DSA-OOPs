#include<iostream>
using namespace std;
int main(){
/* int arr[10]={1,2,3,4,5}; //an array is created of int type with 40 10*4 size of blocks and arr is pointing to the first block of memory
cout<<"address of first block is : "<<arr<<endl; //with array name u can get 1st memory block adress
//&(address of) operator
cout<<"address of first block is : "<<&arr[0]<<endl;
cout<<"address of first block is : "<<&arr<<endl;
cout<<arr[0]<<endl; //op=1

//lets with pointers
cout<<*arr+1<<endl; //op=2//so with *arr named u r getting the value at arr's first and doing *arr+2[1+2], and when writing *(arr+2)is adding 2 integer address to arr location
cout<<*(arr+4)<<endl; //op=5 value at [0+4] address
cout<<*(arr)+2<<endl;
cout<<arr[2]<<endl;

//A FORMULA->arr[i]=*(arr+i) or i[arr]=*(i+arr)

int i=3;
cout<<i[arr]<<endl;
cout<<*(i+arr)<<endl;
*/


//checking size for arrays and pointer
/*int temp[10]={1,2,3,4};
cout<<sizeof(temp)<<endl;
cout<<sizeof(temp[0])<<endl;
cout<<sizeof(*temp)<<endl;
int *p=&temp[0];
cout<<sizeof(p)<<endl;
cout<<sizeof(*p)<<endl; //the value at address pointed by p is an int type value so its size is 4
cout<<sizeof(&p)<<endl;
*/


/*
//& operator difference between arrays and pointers
int a[20]={1,2,3,4,5};
cout<<&a[0]<<endl;
cout<<&a<<endl;

int *p=&a[0];
cout<<p<<endl;
cout<<*p<<endl;
cout<<&p<<endl;
}
*/


/*
//symbol table's content can not be changed mean address assigned to any arr can not be changed,with pointer can be possible bz pointer is holding address as a value and any value can be manipulated in a container
int a[10];
// a=a+1; error
int *ptr=&a[0]; //so u can not do *ptr=&a
cout<<ptr<<endl;
ptr=ptr+1;
cout<<ptr<<endl;
}
*/

//character arrays
char name[20]="yukti sahu";
int a[30]={1,2,3,4,5};
cout<<a<<endl; //int array is giving the location
cout<<name<<endl; //this is giving me whole value (name) stored in character array
//this cout is differently work for character and integer array
char *c=&name[0]; //so like int is should be also storing address of first but no
cout<<c<<endl; // this pointer given the entire string not address it goes until c meet with \0 character
cout<<*c<<endl;

//what if there is no \0 character
char temp='w';
char *ptr=&temp;
cout<<ptr<<endl;
cout<<*ptr<<endl;

// can do -> char ch[6]="abcd" //1st temp memory me store then ch memory me data copied
//should not do-> char *c="abcd" // as in temp memory this data will be stored and its first block of address is in pointer thus risky







}



