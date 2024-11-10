#include <iostream>
using namespace std;



struct node
{
    int data;
    struct node* next;
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
    cout<<"Before Inserting : ";

    while (head!= NULL)
    {
        cout << head->data << endl;
        head = head->next;

    }
    node*p = NULL;
    cout<<"After Inserting :";
    p= new node();
    p->data = 50;
    p->next = a;
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p = p->next;
    }


    return 0;
}
