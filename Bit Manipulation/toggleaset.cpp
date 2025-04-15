/*
this toggle a ith bit means if 
its 1 -> 0
ans 0 -> 1


*/
#include<iostream>
using namespace std;
class Toggle{
    public:
    void toggling(int n ,int i)
    {
        n = n^(1<<i);
        cout<<n;
    }
};

int main()
{
    Toggle t;
    
    t.toggling(13 , 2); // n = 9
}