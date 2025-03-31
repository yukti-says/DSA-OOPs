#include<iostream>
using namespace std;
void Bubblesort(int a[],int size){
//for total rounds
for(int i=0;i<size-1;i++){
    //for each comparesioins
    for(int j=0;j<size-i-1;j++){
        if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
    }
}
}
int main(){
    int size=6;
int a[size]={13,46,24,52,20,9};
cout<<"before sorting: \n";
for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
}
Bubblesort(a,size);
cout<<"\nafter sorting:\n";
for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
}

}

