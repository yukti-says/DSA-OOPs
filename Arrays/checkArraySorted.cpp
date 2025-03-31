#include<bits/stdc++.h>
using namespace std;
int main(){
int a[6]={1,3,4,2,5,4};
int b[6]={1,1,2,3,4,5};
for(int i=0;i<6;i++){
    if(b[i+1]>=b[i]){

    }
    else{

        return  false;
    }
}
cout<<"array is sorted";

}
//for online
int issort(int n,vector<int>a){
for(int i=0;i<6;i++){
    if(a[i+1]>=a[i]){

    }
    else{
        return false;
    }
}
return true;

}
