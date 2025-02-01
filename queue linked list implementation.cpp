#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class Queue
{
private:
    node *front;
    node *rear;
public:
    Queue()
    {
        front = NULL;
        rear = NULL;
    }
    void insert(int val)
    {
        node *p = new node();
        p->data = val;
        p->next = NULL;
        if(front==NULL)
        {
            front = rear = p;
        }
        else
        {
            rear->next = p;
            rear = p;
        }
    }
    void deletion()
    {
        if(front==NULL)
        {
            cout<<"Queue Underflow"<<endl;
            return;
        }
        node *temp = front;
        cout<<"Deleted"<<front->data<<endl;
        front = front->next;
        delete temp;
    }
    void display()
    {
        if(front==NULL)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        node *temp = front;
        cout<<"Queue element : ";
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    Queue q;
    q.insert(12);
    q.insert(45);
    q.insert(95);
    q.insert(78);
    q.display();
    q.deletion();
    q.display();
    q.deletion();
    q.deletion();
    q.deletion();


}
