#include<iostream>
using namespace std;
//int main()

    //why we write int * ptr not pointer ptr-> writing int *ptr is telling us type of data that pointer is pointing to & and at memory level we know how much byte we have to consider like for int 4 byte,4 char 1 byte like this
    //pointer to pointer->double pointer
   /* int a=4;
    int* p=&a;
    int **q=&p; //this is double pointer
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    cout<<q<<endl;
    cout<<**q<<endl;
*/
/*
int f=6;
int *p=&f;
int *q=p; //this is not double pointer created here just copied in q whatever is there in p
(*q)++;
cout<<f<<endl;
*/
/*
int f=8;
int *p=&f;
cout<<(*p)++<<endl; //8 because this is post increment so it printed the value first that 8->then increment -> thus 9 in f
cout<<f<<endl; //9
*/

/*
int *p=0; //null pointer
int f=110;
//p=&f;
*p=f; //before this there is not initialization like p=&f
cout<<*p<<endl;

*/
/*
int f=8;
int s=11;
int *t=&s;
f=*t;
*t=*t+2;
cout<<f<<" "<<s<<endl;
*/

/*
float f=12.5;
float p=21.5;
float *ptr=&f;
(*ptr)++;
*ptr=p;
cout<<*ptr<<" "<<f<<" "<<p<<endl;
*/
/*
int a[5];
int *ptr;
cout<<sizeof(a)<<" "<<sizeof(ptr)<<endl; //20 8
*/

/*
int a[]={11,21,13,14};
cout<<*(a)<<" "<<*(a+1)<<endl; //11 21
*/

/*
int a[6]={11,21,13};
cout<<a<<" "<<&a<<endl; //will give the first block address same
*/

/*
int a[6]={11,21,13};
cout<<(a+1)<<endl; //21 ka address
*/

/*
int a[6]={11,21,31};
int *p=a;
cout<<p[2]<<endl; //31
*/

/*
int a[]={11,12,13,14,15};
cout<<*(a)<<" "<<*(a+3)<<endl; //11 14
*/

/*
int a[]={11,21,31,41};
int *p=a++; //error bz here array is being updated which can not be possible,pointer can be updated
cout<<*p<<endl;
*/

/*
char c='a';
char *ptr=&c;
c++; // output will be b,a ke ascii me 1 added
cout<<*ptr<<endl;
*/

/*
char a[]="abcde";
char *p=&a[0];
cout<<p<<endl; //whole string will be displayed
*/

/*
char a[]="abcde";
char *p=&a[0];
p++; //1 added so it will start pointing from bcde
cout<<p<<endl; //bcde
*/

/*
char str[]="babbar";
char *ptr=str;
cout<<str[0]<<" "<<ptr[0]<<endl; // b b
*/

/*
void update(int *p)
{
    *p=(*p)+2;
}

int main(){
int i=10;
update(&i);
cout<<i<<endl; //12
}

*/

/*
void fun(int a[]){
cout<<a[0]<<" ";
}

int main()
{
    int a[]={11,12,13,14};
    fun(a+1);
    cout<<a[0]<<endl;

} // 12 11 output

*/
/*
int main(){
/*int first=10;
int *p=&first;
int **q=&p;
int second=20;
*q=&second;
(*p)++;
cout<<first<<" "<<second<<endl; // 10 21
*/

/*
int first=110;
int *p=&first;
int **q=&p;
int second=(**q)++ +9;
cout<<first<<" "<<second<<endl; //110 119
*/
/*
int first=100;
int *p=&first;
int **q=&p;
int second=++(**q);
int *r=*q;
++(*r);
cout<<first<<" "<<second; //102 101
*/
void increament(int **p){
++(**p);

}

int main()
{
    int num=110;
    int *ptr=&num;
    increament(&ptr);
    cout<<num<<endl; //111
}





