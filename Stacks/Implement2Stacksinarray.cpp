#include<iostream>
using namespace std;
class stacks
{
public:
    int *arr;
    int top1;
    int top2;
    int size;
    //insertion for stack one will be left to right and top 2 == size so insertion will be from right to left
    //u can give it n/2 spaces to both of stacks
    stacks(int size)
    {
        this->size = size;
        top1 = -1;
        top2 = size;
        arr = new int[size];
    }

    void push1(int element)
    {
        //if atleast one space is available so u can push
        if(top2-top1>1)
        {
            top1++;
            arr[top1] = element;
        }
        else
            cout<<"stack overflow"<<endl;


    }

    void push2(int element)
    {
        if(top2-top1>1){
            top2--;
            arr[top2] = element;
        }
        else
            cout<<"stack is overflow"<<endl;

    }

    void pop1()
    {
        if(top1>0)
        {
            int value = arr[top1];
            top1--;
            cout<<"\n popped element is: "<<value<<endl;
        }
        else
            cout<<"stack underflow"<<endl;
    }

    void pop2()
    {
        if(top2<size)
        {
            int value = arr[top2];
            top2++;
            cout<<"popped element is: "<<value<<endl;
        }
        else
            cout<<"stack is underflow"<<endl;

    }

    void printstack1()
    {   cout<<"stack one: "<<endl;
        for(int i = 0;i<=top1;i++)
            cout<<arr[i]<<" ";

        cout<<endl;
    }

    void printstack2()
    {   cout<<"stack two: "<<endl;
        for(int i=top1+1;i<size;i++)
            cout<<arr[i]<< " ";
    }


};


int main()
{
    stacks s(6);
    s.push1(1);
    s.push1(2);
    s.push1(4);
    s.push2(10);
    s.push2(20);
    s.push2(30);
   // s.push2(40);
   s.printstack1();
   s.printstack2();
   s.pop2();
   s.printstack2();
}
