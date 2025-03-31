#include<bits/stdc++.h>
using namespace std;
int main(){
int a[6]={1,-4,-2,67,34,23};
int fsmaalest=a[0];
int ssaalest=INT_MAX;
for(int i=1;i<6;i++){
    if(fsmaalest>a[i]){
        ssaalest=fsmaalest;
        fsmaalest=a[i];
    }
    else if(fsmaalest<a[i]&&ssaalest>a[i]){
        ssaalest=a[i];
    }
}
cout<<ssaalest;
cout<<" "<<fsmaalest;
}

//another way
for(int i=0;i<6;i++){
    if(fsmaalest>a[i]){
            fsmaalest=a[i];

    }
}
cout<<"first smallest:"<<fsmaalest;
for(int i=0;i<6;i++){

    if(ssaalest>a[i]&&a[i]!=fsmaalest){
        ssaalest=a[i];
    }
}
cout<<"\nsecond smallest:"<<ssaalest;
