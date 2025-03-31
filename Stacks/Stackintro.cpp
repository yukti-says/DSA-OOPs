#include<iostream>
#include<stack>
using namespace std;
/*
//with STL : lifo principle
int main()
{
    //create stack
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(90);
    s.pop();
    cout<<"top element of stack is: "<<s.top()<<endl;

    if(s.empty())
        cout<<"stack is empty"<<endl;
    else
        cout<<"stack is not empty"<<endl;
    cout<<"size of stack is: "<<s.size()<<endl;

}
*/

//STACK IMPLEMENTATION NO STL with array
class Stack
{
public:
    //properties
    int top ;
    int *arr;
    int size;

    //behaviour
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;

    }


    void push(int element)
    {
        if(top == size-1) //or if(size-top>1) top++;

            cout<<"stack is full,overflow"<<endl;

        else{
            top = top+1;
            arr[top] = element;
        }
    }

    void pop()
    {   if(top>=0){
        int value = arr[top];
        top = top-1;
        cout<<"\npopped element is: "<<value;}
        else{
            cout<<"stack underflow"<<endl;
        }
    }

    int peek()
    {   if(top>=0)
          return arr[top];

        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }

    bool isempty()
    {
       if(top==-1){
        return true;
       }
       else
        return false;
    }

    void print()

    {   cout<<endl;
        cout<<"stack is: "<<endl;
        for(int i = 0;i<size;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
};


int main()
{
    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<"\ntop element is: "<< s.peek()<<endl;
    s.pop();
    cout<<"\ntop element is: "<< s.peek()<<endl;
    s.pop();
    s.pop();
    s.pop();
    cout<<"\ntop element is: "<< s.peek()<<endl;
    s.push(100);
    if(s.isempty())
        cout<<"stack is empty"<<endl;
    else
        cout<<"stack is not empty"<<endl;
        //time complexity for all this will be O(1)

}
