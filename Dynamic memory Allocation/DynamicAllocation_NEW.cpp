/*
earlier all the memory allocation u have did was all static memory allocation. given by compile time. and was in STACK section of memory
but if u did int n;-> int a[n]; this practice is not good bz you are specifying array size during run time. any program when starts running
it comes/acquires fix kind of memory of stack and heap. if u need more memory for array and the program does not come with it,it might crash
so its better to specify array size during compile time if using static memory allocation.
but it u want to specify array size during run time-> USE DYNAMIC MEMORY ALLOCATION ->"NEW" , heap memory will be used in this

new char; this will specify a address in heap section of char size and will return address so u have to access this through "pointer"
can not give name,use pointers
its important to delete the allocated memory in heap

*/

#include<iostream>
using namespace std;
int getsum(int *a, int n){
int s=0;
for(int i=0;i<n;i++){
    s=s+*(a+i);

}
return s;
}

int main()
{
    /*
    char * ch=new char;
    *ch=34;
    cout<<*ch<<endl;
    *ch=*ch+2;
    cout<<*ch;
    */

    /*
    int *p= new int; //new int returned a address from heap of int size and *p is pointing to that address
    *p=90;
    cout<<*p<<endl;
    *p=*p*2;
    cout<<*p;
    */
/*
    int *arr=new int[5];
    cout<<sizeof(arr);
    cout<<"enter values for array: "<<endl;
    for (int i=0;i<5;i++){
        cin>>arr[i];
    }
    for (int i=0;i<5;i++){
        cout<<arr[i];
    }
    */

    // variable size of array
    int n;
    cout<<"enter size n: "<<endl;
    cin>>n;
    int *a= new int[n];
    cout<<"enter values for array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=getsum(a,n);
    cout<<"sum of array element is: "<<ans<<endl;

    delete a;
    cout<<"memory released";


    int *aa= new int[60];
    delete aa;
}

/*
some dangers:
in static while(1){ int n=5; in this n is occupying only 4 byte of memroy bz as block ends variable memory is releaed in stack
}

but what if while(1){
 int *p= new int;
 } in this p is having 8 byte in stack which will be get free as block ends but in heap everytime the code will execute 4 byte memory will be consumed and if not released it may cause harm to system
 its imp to release the memory

 delete variable_name;
*/
