#include<iostream>
using namespace std;
void Rotate(int a[],int size,int sift_count,int side){
if(side=='Right'){
    while(sift_count){
        int temp=a[size-1];
        for(int i=size-1;i>=1;i--){
            a[i]=a[i-1];


        }
         a[0]=temp;
    sift_count--;


}}
else{

    while(sift_count){
        int temp=a[0];
        for(int i=0;i<size-1;i++){
            a[i]=a[i+1];


        }
         a[size-1]=temp;
    sift_count--;


}
}

}

void print(int a[],int size){
cout<<"\nArray after Rotation:";
for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
}}

int main(){
int size;
cout<<"enter the size for array:";
cin>>size;
cout<<"\nenter elements for arrays:";
int a[size];
for(int i=0;i<size;i++){
    cin>>a[i];
}
int sift_count;
cout<<"\nenter shift counts:";
cin>>sift_count;

string side;
cout<<"\nenter the side for shifting:";
cin>>side;

cout<<"\narray before retation: ";
for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
}

Rotate(a,size,sift_count,'side');
print(a,size);
}
