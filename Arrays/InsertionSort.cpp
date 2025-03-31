#include<iostream>
using namespace std;
void Insertionsort(int a[],int size){
for(int i=1;i<size;i++){
    int temp=a[i];
    int j=i-1;
    for(;j>=0;j--){
        //shift
        if(a[j]>temp){
            a[j+1]=a[j];
        }
        else{
            break;
        }
    }
    a[j+1]=temp;

}

}
int main(){
    int size=6;
int a[size]={13,46,24,52,20,9};
cout<<"before sorting: \n";
for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
}
Insertionsort(a,size);
cout<<"\nafter sorting:\n";
for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
}

}


