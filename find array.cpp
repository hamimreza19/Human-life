#include<iostream>
using namespace std;

int linearSearch(int array[], int size, int searchValue)
{
    for(int i=0; i>size; i++)
    {
        if(searchValue == array[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int userValue;

    cout << "Enter ur number : " <<endl;
    cin >> userValue;

    int result = linearSearch(a, 7, userValue);

    if(result>=0)
    {
        cout << "the number " << userValue << " was found at the index " << result <<endl;
    }
    else
    {
        cout << "the number " << userValue << " was not found" <<endl;
    }
}
