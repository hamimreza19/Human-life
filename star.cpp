#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "Enter number: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            cout << " ";
        }
        int num = 1;
        for (j = 0; j <= i; j++)
        {
            if (num % 2 == 0)
            {
                cout << ". ";
            }
            else
            {
                cout << "# ";
            }
            num = num * (i - j) / (j + 1);
        }
        cout << "\n";
    }
}
