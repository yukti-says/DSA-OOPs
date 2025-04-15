#include<iostream>
#include<algorithm>
using namespace std;
string convert2binary(int x){
    string r;
    while(x!=0){
        if(x%2==1){
            r +='1';
        }
        else
        {
            r +='0';
        }
           x = x/2;

    }
    reverse(r.begin() , r.end());
    return(r);
}
int main()
{
    int x;
    cout<<"enter a decimal number: ";
    cin>>x;
    string result = convert2binary(x);
    cout<<"binary of "<<x<<" is "<<result;
}
