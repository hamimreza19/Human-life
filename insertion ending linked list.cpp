#include <iostream>
using namespace std;
struct node
{
    int data;
     node* next;


};

int main()
{
    node *a = NULL, *b = NULL, *c = NULL;


    a = new node();
    b = new node();
    c = new node();

    a->data = 10;
    b->data = 20;
    c->data = 30;


    a->next = b;
    b->next = c;
    c->next = NULL;

    node *head = a;
    node *hamim=head;

 cout<<"Before inserting data : ";
    while (hamim!= NULL)
    {
        cout << hamim->data << endl;
       hamim = hamim->next;

    }
    cout<<"After inserting data : ";
    node *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    node *p=new node();
    p->data=60;

    temp->next = p;
    p->next = NULL;
cout<<"After inserting data : ";

while (head!= NULL)
    {
        cout << head->data << endl;
       head = head->next;

    }
    return 0;
}

