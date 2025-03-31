#include<iostream>
#include<queue>
using namespace std;
/*
//STL USING fifo order
int main()
{
    queue<int> q;
     q.push(10);
     q.push(20);
     q.push(30);
     q.push(40);
     cout<<"first element: "<<q.front()<<endl; //will give the first element
     cout<<"size is: "<<q.size()<<endl;
     cout<<"last element: "<<q.back()<<endl;
     q.push(67);
     q.pop();
      cout<<"first element: "<<q.front()<<endl; //will give the first element
     cout<<"size is: "<<q.size()<<endl;
     cout<<"last element: "<<q.back()<<endl;

     q.emplace(90);
     if(q.empty())
        cout<<"queue is empty"<<endl;
     else
        cout<<"queue is not empty"<<endl;

}

*/
class Queue
{
public:
    int front;
    int rear;
    int data;
    int size;
    int *arr;

    Queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void enqueue(int data)
    {
        if(rear == size)
            cout<<"queue is full"<<endl;
        else
        {
            arr[rear] = data;
            rear++;
        }
    }

    void dequeue()
    {
        if(front == rear)
            cout<<"queue is empty";
        else
        {
            int value;
            value = arr[front];
            front++;
            cout<<"deleted value is: "<<value<<endl;
            if(front == rear)
            {
                front = 0;
                rear = 0;

            }
        }
    }

    void print()
    {   cout<<"queue is: "<<endl;
        for(int i = front ;i<rear ; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }

    void frontfirst()
    {
       if(rear == front)
            cout<<"queue is empty"<<endl;
       else
        cout<<"top element is: "<<arr[front]<<endl;
    }

    bool isempty()
    {
        if(front == rear)
            return true;
        else
            return false;
    }
};

int main()
{
    Queue q(5);
    q.enqueue(3);
    q.enqueue(5);
    q.enqueue(34);
    q.enqueue(35);
    q.enqueue(40);
    q.enqueue(41);
    q.print();
    if(q.isempty())
        cout<<"queue is empty"<<endl;
    else
        cout<<"queue is not empty"<<endl;
    q.frontfirst();
}
