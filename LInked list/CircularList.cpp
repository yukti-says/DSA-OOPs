#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {

        this->data = data;
        this->next = NULL;
    }

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

//we will need tail pointer here no need to use head
void insertnode(Node *&tail , int element, int data)
//will assume that element is present here
{
    //if empty list
    if(tail == NULL)
    {
        Node *node = new Node(data);
        tail = node;
        node->next = node;

    }
    else
    {
        //assuming the element will be here and the new data will be after the element meaning after data
        Node *curr  = tail;
        //jab tak element nhi milta tab tak search and if found than current is pointing to that node which having element
        while(curr->data != element)
        {
            curr = curr->next;
        }
        //element found and current is pointing there
        Node *temp  = new Node((data));
        temp ->next = curr->next;
        curr->next = temp ;

    }

}

void print(Node *tail)
{
    Node *temp = tail;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp != tail);

    cout<<endl;

}
//value ke through delete
void deletenode(Node *&tail , int value)
{
    //empty list
    if(tail == NULL)
        {cout<<"list is empty so check it first"<<endl;
        return;}
    else
        //assuming that value is present in list
    {
        Node *pre = tail;
        Node *curr = pre->next;
        while(curr->data != value)
        {   //dono ko agge bada do
            pre = curr;
            curr = curr->next;

        }
        pre->next = curr->next;
        if(tail == curr)
            tail = pre;
        curr->next = NULL;
        delete curr;

    }
}

int main()
{
 Node *tail = NULL;
 insertnode(tail , 2, 3);
 print(tail);
 insertnode(tail , 3, 4);
 print(tail);
 insertnode(tail , 4, 5);
 print(tail);
 insertnode(tail , 3, 10);
 print(tail);
 insertnode(tail , 10, 11);
 print(tail);
 insertnode(tail , 11, 12);
 print(tail);
 insertnode(tail , 4, 13);
 print(tail);
 insertnode(tail , 13, 2);
 print(tail);
 insertnode(tail , 2, 1);
 print(tail);
 insertnode(tail , 5, 0);
 print(tail);
 deletenode(tail,0);
 print(tail);
  deletenode(tail,12);
 print(tail);
 //since this is circular list so we do not know about start and end and this is not logical to work with as well
}
