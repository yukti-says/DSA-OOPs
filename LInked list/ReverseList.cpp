/*
approach: while(previous!=null)
time complexity - O(n)
space complexity - O(1)
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
      {
          Node *temp;
          temp = head;
          cout<<"Linked list is: "<<endl;
          while(temp!=NULL)
          {
              cout<<temp->data<< " ";
              temp = temp->next;
          }


      }

Node *reverselist(Node *head)
{
  if (head == NULL || head->next ==NULL){
    return head;
  }
  Node* pre = NULL;
  Node *current = head;

  while(current!=NULL)
  {
      Node *forwardd = current->next;
      current->next = pre;
      pre = current;
      current = forwardd;
  }
  return pre;
}

void rprint(Node *&head)
      {
          Node *temp;
          temp = head;
          cout<<endl;
          cout<<"Reversed Linked list is: "<<endl;
          while(temp!=NULL)
          {
              cout<<temp->data<< " ";
              temp = temp->next;
          }


      }


int main()
{
     Node *node1 = new Node(34);
     Node *head = node1;
    insertathead(head , 90);
    insertathead(head , 100);
    insertathead(head , 110);
    print(head);
    head = reverselist(head);
    rprint(head);


}
