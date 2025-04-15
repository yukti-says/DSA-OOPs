#include<iostream>
using namespace std;
class A{
    public:
    bool ispoweroftwo(int n)
    {
        //if n is 0 so
        if (n<=0){
            return false;
        }
        else{
            return ((n & (n-1)) == 0);
        }

    }
};

int main()
{
    A a;
   
    if( a.ispoweroftwo(39)){
        cout<<"Yes, it is power of 2"<<endl;
    }
    else{
        cout<<"No, it is not power of 2"<<endl;
    }
}