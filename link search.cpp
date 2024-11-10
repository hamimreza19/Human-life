#include <iostream>
using namespace std;



struct node
{
    int data;
    struct node* next;
};
node* linearSearch(node *head, int val){
    node* c = head;
    while(c!=NULL){
        if(c->data==val){
            return c;
        }
        c = c->next;
    }
return NULL;
}

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
    cout<<"Linked list  :"<<endl;
    while (head!= NULL)
    {
        cout << head->data << endl;
        head = head->next;

    }
    int val = 10;

    node *result = linearSearch(a,val);



        if(result!=NULL){
            cout<<"Value "<<val<< " found in the list."<<endl;
        }
        else{
            cout<<"Value " << val<< " not found in the list."<<endl;
        }




    return 0;
}

