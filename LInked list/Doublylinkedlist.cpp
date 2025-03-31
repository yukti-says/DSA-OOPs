#include<iostream>
using namespace std;

class Node
{   public:



    int data;
    Node *pre;
    Node *next;

    Node(int data)
    {
        this->data = data;
    }

    ~Node()
    {
      int value = this->data;
      if(next != NULL)
      {
          delete next;
          next = NULL;
      }
      cout<<"memory deleted for data: "<<value<<endl;
    }

};
void print(Node *head){
 Node * temp = head;
 cout<<"Linked list is: "<<endl;
 while(temp!=NULL)
          {
              cout<<temp->data<< " ";
              temp = temp->next;


          }
          cout<<endl;

}

int getlenth(Node *head)
{
Node * temp = head;
int len = 0;
while(temp!=NULL)
          {   len++;
              temp = temp->next;
          }
return len;
}

void insertathead( Node *& head , int data)
{
    //if i have empty list so
    if(head == NULL)
    {
        Node *node = new Node(data);
        head = node;
    }
    else{
    Node * temp = new Node(data);
    temp->next = head;
    head->pre = temp;
    head = temp;
    }

}

void insertattail( Node *&tail , int data)
{   if(tail == NULL)
{
    Node *node = new Node(data);
    tail= node;
}
    else{
    Node * temp = new Node(data);
    temp->pre = tail;
    tail->next = temp;
    temp->next = NULL;
    tail = temp;
}
}
void insertatposition( Node *head , Node *tail, int position , int data)
  {  //if position is first so
     if(position == 1)
     {
         insertathead(head , data);
         return;
     }

    //if position is n so u have to traverse n-1
    Node *temp = head;
    int count = 1;
    while(count < position-1)
    {
        temp = temp->next;
        count++;
    }

    //if position is last so
     if(temp->next == NULL)
     {
         insertattail(tail, data);
     }


    //create new node
    Node *nodeinsert = new Node(data);
    nodeinsert ->next = temp->next;
    temp->next->pre = nodeinsert;
    temp->next = nodeinsert;
    nodeinsert->pre = temp;
 }

void deletenode(int position , Node *&head)
{
    if(position == 1)
     {   Node * temp = head;
         temp->next->pre = NULL;
         head = head->next;
         //free node
         temp->next=NULL;
         temp->pre = NULL;
         delete temp;
     }

     else
     {
         Node *current= head;
        Node *previous = NULL;
        int count = 1;
        while(count < position){
            previous = current;
            current = current->next;
            count++;
        }
        current->pre =NULL;
        previous->next->pre = NULL;
        previous->next = current->next;
        current->next=NULL;
        delete current;

     }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    //print(head);
    //cout<<"lenght of this list is: "<<getlenth(head)<<endl;
    insertathead(head , 11);
    insertathead(head , 12);
    insertathead(head , 13);
    insertattail(tail , 9);
    insertattail(tail , 8);
    insertattail(tail , 7);
    insertattail(tail , 6);
    insertatposition(head , tail , 2, 11);
    print(head);
    deletenode(1,head);

    print(head);
    deletenode(4,head);
    print(head);
   // print(tail);
    cout<<"lenght of this list is: "<<getlenth(head)<<endl;

}
