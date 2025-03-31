// function calling it self is recursioin

#include<iostream>
using namespace std;
/*
int Power(int n,int i){
    if (n==0){
        return 1;
    }
    else{

        return i*Power(n-1,i);
    }

}
int main()
{   int n,i;
    cout<<"enter what power you want: "<<endl;
    cin>>n;
    cout<<"enter number you want to get its power: ";
    cin>>i;
    int a=Power(n,i);
    cout<<"Result is: "<<a;
}

*/

/*
//FACTORIAL PROGRAM
int fact(int n)
{
    if (n==0){
        return 1;
    }
    else {
        return n * fact(n-1);
    }
}

int main()
{
    int n;
    cout<<"enter number: ";
    cin>>n;
    int result = fact(n);
    cout<<"The factorial of given number is: "<<result;

}
*/

/*
void reachhome(int source, int destination)
{   cout<<"source: " <<source <<" destination: "<<destination <<endl;
    if (destination==source){
        cout<< "reached! "<<endl;
        return;
            }

    // u also write source++ and just pass source-> this part will be in processing part of recursion
    else{
        return reachhome( source+1 ,destination);
    }
}

int main()
{
    int source =1;
    int destination = 10;
    reachhome(1,10);
}
*/

/*
//FABONACCI SERIES

int fun(int n){
if (n==0){
    return 0;
}
else if(n==1){
    return 1;
}
else{

    return fun(n-1)+fun(n-2);
}

}

int main()
{
    int n;
    cout<<"enter th term to get fabonacci: ";
    cin>>n;
    int a = fun(n);
    cout<<"term is: "<<a;
}

*/

/*
//so are at 0th stair and u want to reach on nth stair, u can have only two ways to reach there by one step or by two step

int reach(int n)
{
    if (n<0){
        return 0;
    }
    else if (n==0){
        return 1;
    }
    else{
        return reach(n-1) + reach(n-2);
    }
}

int main()
{
    int n;
    cout<<"enter the nth position to reach: ";
    cin>>n;

    int a = reach(n);
    cout<<" number of ways to climb from oth to nth stair: "<<a;
}
*/

//SAY DIGITS input-> a number given 412 in output you have to tell four one two

