#include<iostream>
using namespace std;
void Selectionsort(int a[],int size){
int s;
for(int i=0;i<size-1;i++){
        s=i;
    for(int j=i+1;j<size;j++){
        if(a[j]<a[s]){
            s=j;
        }

    }
   swap(a[s],a[i]);

}



}
int main(){
    int size=6;
int a[size]={13,46,24,52,20,9};
Selectionsort(a,size);
for(int i=0;i<size;i++){
    cout<<a[i]<<" ";
}

}
