/*
pointer to a function is storing a function address to a pointer and call that function using pointer
syntax :
return_type (*pointer name) (parameter type)
pointer_name = function_name; //calling of a function


#include<iostream>
using namespace std;

int add(int a , int b)
{
  return a+b;
}

int main()
{
    int (*function_pointer)(int  , int); //this is pointer name that takes two int parameter and return int
    function_pointer = add; //assigned the address of function add to this pointer and than it will return
    cout<<"enter two variables: "<<endl;
    int x;
    int y;
    cin>>x;
    cin>>y;

    cout<<"the addition is: "<<function_pointer(x , y);
}
*/

#include<iostream>
using namespace std;
int multi(int x, int y)
{
    return x*y;
}

void result(int(*function_pointer)(int , int) , int x, int y)
{
    cout<<"result  is : "<<function_pointer(x, y );
}

int main()
{
    int x, y;
    cout<<"enter two numbers: "<<endl;
    cin>>x;
    cin>>y;
    result(multi,x , y);
}
