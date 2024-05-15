#include<iostream>
using namespace std;

struct book
{
    char name[20];
    int price;
};
int main()
{
    typedef struct book Book;
    Book b = {"Acknowledge me",1311};
    cout<<"Book Name = "<<b.name<<endl;
    cout<<"Book Price = "<<b.price;
}
