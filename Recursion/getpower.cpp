#include<iostream>
using namespace std;

int power(int a , int b){

int ans=1;
for(int i=0;i<b;i++){
    ans = ans*a;
}
return ans;
}

int main()
{
    int a ,b;
    cout<<"enter the number: ";
    cin>>a;
    cout<<"\nenter power number: ";
    cin>>b;
    cout<<endl;
    int ans = power(a ,b);
    cout<<"the power is: "<<ans;
}
