#include <iostream>
using namespace std;

class Space
{
    int x, y;
public:
    Space(int a = 0, int b = 0) // Default constructor with default arguments
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << x << " " << y << " "<<endl;
    }

    Space operator + ( Space ob)// Correct signature and use of reference
    {
        Space temp;
        temp.x = x + ob.x;
        temp.y = y + ob.y;
        return temp;
    }
};

int main()
{
    Space s1(5, 10), s2(7, 8), s3; // Initialize objects correctly
    s3 = s1 + s2;
    s1.display();
    s2.display();
    s3.display();

    return 0;
}
