//in interview if u know some solutions don't directly jump for answers,rather ask for test cases to interviewer,go for 1st brute solution
//then for better one ->optimized one with all time complexity and all

#include<bits/stdc++.h>
using namespace std;
int main(){
 int a[6]={3,2,10,5,3,2};
 int l=a[0];
 for(int i=0;i<6;i++){
    if(l<a[i]){
        l=a[i];
    }
 }
 cout<<"largest element in array is: "<<l;
}
