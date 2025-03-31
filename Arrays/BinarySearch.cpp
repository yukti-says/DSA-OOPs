#include<iostream>
using namespace std;
int BinarySearch(int a[],int n,int key){
    int l=0,mid;
    int h=n-1;
    while(l<=h){
        mid=(l+h)/2;
        if(key==a[mid]){
            return mid;
        }
        if(key<a[mid]){
            h=mid-1;
        }
        else
            l=mid+1;
    }
    return -1;

}
int main(){
    int n=15;
int a[n]={3,6,8,12,14,17,25,29,31,36,42,47,53,55,62};
cout<<"\n The Array is: ";
for(int i=0;i<15;i++){
    cout<<a[i]<<" ";
}
int key;
cout<<"\nEnter the number you want to search for: ";
cin>>key;
int index=BinarySearch(a,n,key);
cout<<"\nThe Index for this number is: "<<index;
}
