#include<iostream>
using namespace std;
void printbinary(int n){
 for(int  i =n ; i>=0;--i){
        cout<< ((n>>i) &1);


 }
}

int main()
{

    printbinary(113);
}
