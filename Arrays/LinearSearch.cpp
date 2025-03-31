#include<iostream>
using namespace std;
int LinearSearch(int a[],int n,int key){
int k=0;
while(k<n){
    for(int i=0;i<n;i++){
        if(key==a[k])
            return k;
        else
            k++;
    }
    return -1;
}
}

int main(){
    int n=15;
int a[n]={3,6,8,12,14,100,25,29,31,36,42,47,53,55,62};
cout<<"\n The Array is: ";
for(int i=0;i<15;i++){
    cout<<a[i]<<" ";
}
int key;
cout<<"\nEnter the number you want to search for: ";
cin>>key;
int index=LinearSearch(a,n,key);
cout<<"\nThe Index for this number is: "<<index;
}

