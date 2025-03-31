#include<iostream>
using namespace std;

void print(int *p){
cout<<p<<endl; //will give address
cout<<*p<<endl; //will give the value at that address
}

/*void update(int *p){
*(p=p+1)=45; //provided a value to (p+1) address
cout<<*p<<endl;
cout<<p<<endl;
}*/

void update(int *p){
p=p+1; //so u can not work with pointers like this if passed into a function but u can do *p=*p+1 can do with value
cout<<"update's p value is: "<<p<<endl;
}
int get_sum(int a[],int n){ //so behind the seen *a is passed not the real array
    cout<<"passed array size is: "<<sizeof(a)<<endl;//size is 8 of passed array
    int sum=0;
    for(int  i=0;i<n;i++){
        sum=sum+a[i];
    }
    return sum;

}


int main()
{
/*int value=90;
int *p=&value;
//print(p);
cout<<"before update value "<<p<<endl;
update(p);
cout<<"after update value "<<p<<endl; //here u will not get any change both will be same */
int a[6]={1,2,3,4,5,6}; //this array size should be 4*5 20
cout<<"not passed array size is: "<<sizeof(a)<<endl; //20
cout<<"sum is: "<<get_sum(a+3,3)<<endl; //array ke little part ko bhi parameters pass kar sakte h

}




