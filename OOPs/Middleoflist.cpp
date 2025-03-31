/*
way : traverse the list then take mid = len/2
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
/*
int getlen(Node *head)
{
    int count = 0;
    Node *temp = head;
    while(temp!=NULL)
    {
        temp= temp->next;
        count++;
    }
    return count;
}
Node *findmiddlenode(Node *head)
{
    int len = getlen(head);
    int ans = (len/2);
    Node * temp = head;
   // int count=0;
    while(ans--)
    {
        temp = temp->next;
        //count++;
    }
    return temp;

}
*/

//OPTIMIZE ONE
Node *findmiddlenode(Node *head)
{
    Node*fast, *slow;
    if(head == NULL || head->next == NULL)
        return head;
    if(head->next->next == NULL){
        return head->next;

    }
    slow = head;
    fast = head->next;
    while(fast!=NULL)
    {
        fast = fast->next;
        if(fast!=NULL)
            fast = fast->next;
        slow = slow->next;
    }
    return slow;
}

int main()
{
     Node *node1 = new Node(34);
     Node *head = node1;
    insertathead(head , 90);
    insertathead(head , 100);
    insertathead(head , 110);
    insertathead(head , 900);
    insertathead(head , 1);
    insertathead(head , 2);
     print(head);
     cout<<endl;
     Node *temp = findmiddlenode(head);
    cout<<"middle node is: "<<temp->data<<endl;;




}

