#include<iostream>
using namespace std;
/*
full condition : front == 0 && rear == size-1 && rear == front-1%size-1
if front==-1 mean queue is empty so front=rear=0 and insert element
if rear == size-1 && front!=0
rear = 0; and insert data
else
rear++ insert data


*/
class queues
{
public:
    int * arr;
    int front;
    int rear;
    int size;

    queues(int size)
    {
        this->size = size;
        arr = new int[size];
        front  = rear = -1;

    }

    void enqueue(int value)
    {
        //check for queue full
        if(front == 0 && rear == size-1 && rear == front-1%size-1)
            cout<<"queue is false"<<endl;
        else if(front == -1) // first element for push
        {
            front = rear = 0;
            arr[rear] = value;

        }
        else if(rear == size-1 && front !=0 )
        {
            rear = 0;
            arr[rear] = value;
        }
        else{
            rear++;
            arr[rear] = value;
        }

    }

     void dequeue()
     {
         //check for empty
         if(front == rear == -1)
            cout<<"queue is empty"<<endl;
         else if(front==rear)
         {
             int data;
             data = arr[rear];
             front = rear =-1;
             cout<<"deleted data is: "<<data<<endl;
         }
         else if(front == size-1)
         {
             int data;
             data = arr[front];
             front = 0;
             cout<<"deleted data is: "<<data<<endl;

         }
         else
         {
             int data = arr[front];
             front++;
             cout<<"deleted data is: "<<data<<endl;

         }
     }

void print() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue is: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }




};

int main()
{
    queues q(6);
    q.enqueue(10);
    q.print();
    q.enqueue(20);
    q.print();
    q.enqueue(30);
    q.print();
    q.enqueue(40);
    q.print();
}

