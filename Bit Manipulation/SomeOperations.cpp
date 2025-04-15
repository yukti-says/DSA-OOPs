#include<iostream>
using namespace std;
bool checkbit(int n , int i){
    if((n&(1<<i))!= 0){
        return true;
    }
    else
       {
            return false;
       }
}
int main()
{
   int n =9 , i=2;
    //check is ith bit is set or not
    bool r = checkbit( 13 ,  1);
    if(r){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

    int setbit = n | (1<<i);
    cout<<endl<<setbit;

    int clearbit = n&(~(1<<i));
    cout<<endl<<clearbit;
}
