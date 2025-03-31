#include<bits/stdc++.h>
using namespace std;
int main(){
int a[6]={-1,2,56,3,4,90};
int l=a[0];
int s=INT_MIN;    //can take s=-1 if array doesn't contain any negative number
for(int i=1;i<6;i++){
    if(l<a[i]){
       s=l;
       l=a[i];
    }
    else if(l>a[i]&&s<a[i]){
            s=a[i];

    }

}
cout<<s;
}

//another way to solve
for(int i=0;i<6;i++){
    if(l<a[i]){
        l=a[i];
    }
}
cout<<"first largest is: "<<l<<endl;
for(int i=0;i<6;i++){
    if(s<a[i]&&a[i]!=l){
        s=a[i];
    }
}
cout<<"second largest is: "<<s;
