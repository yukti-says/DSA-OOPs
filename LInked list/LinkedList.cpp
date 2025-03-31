/*
linked list is the collection of nodes, it is a linear data structure
one node contains : data part and a pointer who points to  next node
memory usage

so in c we used to do this with structure here we will be implement this with classes

*/
#include<iostream>
using namespace std;

class Node{
   public:
       int data;
       Node * next;

      //creating constructor to put data
      Node(int data)
      {
          this->data = data;
          this->next = NULL;

      }
      //destructor
      ~Node()
      {
          int value = this->data;
          //memory free
          if(this->next!=NULL){
            delete next;
            this->next = NULL;
          }
          cout<<"memory deleted for this data: "<<value<<endl;
      }


};

void insertathead(Node * &head, int data)
      //create new node first
      {
          Node * temp = new Node(data);
          temp ->next = head;
          head = temp;

      }
void print(Node *&head)
      {//treaverse
          Node *temp;
          temp = head;
          cout<<"Linked list is: "<<endl;
          while(temp!=NULL)
          {
              cout<<temp->data<< " ";
              temp = temp->next;
          }


      }

 void insetattail(Node *&head , int data)
 {
  Node *tail = head;

  while(tail->next!=NULL)
  {
      tail = tail->next;
  }
  Node *newnode = new Node(data);
  newnode->data = data;
  newnode->next = NULL;
  tail ->next = newnode;
  tail = newnode;
 }

 void insertatmiddle(Node *&head , int position,int data)
 {  //if position is first so
     if(position == 1)
     {
         insertathead(head , data);
         return;
     }

    //if position is n so u have to traverse n-1
    Node *temp  = head;
    int count = 1;
    while(count < position-1)
    {
        temp = temp->next;
        count++;
    }
    //create new node
    Node *nodeinsert = new Node(data);
    //now link
    nodeinsert ->next = temp->next;
    temp->next = nodeinsert;
 }

 void deleteatposition(int position , Node *& head)
 {
     if(position == 1)
     {   Node * temp = head;
         head = head->next;
         //free node
         temp->next=NULL;
         delete temp;
     }
     else{
        Node *current= head;
        Node *previous = NULL;
        int count = 1;
        while(count < position){
            previous = current;
            current = current->next;
            count++;
        }
        previous->next = current->next;
        current->next=NULL;
        delete current;
     }
 }
int main()
{
    Node *node1 = new Node(34);
    //node1->print();
    //Node *node2 = new Node(100);
    //node2.print(); this can not be done since node1 and 2 are pointer type of objects
    //node2->print();
    Node *head = node1;
    Node *tail = node1;
    insertathead(head , 10);
    //print(head);
    insertathead(head , 90);
    insertathead(head , 100);
    insertathead(head , 110);
    insetattail(head , 23);
    insetattail(head , 24);
    insetattail(head , 25);
    insertatmiddle(head , 4 , 101);
    insertatmiddle(head , 10 , 2001);
    //deleteatposition(1,head);
   // deleteatposition(11 , head); //last
    //deleteatposition(4,head);

    print(head);
}
