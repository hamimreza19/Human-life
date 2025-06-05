#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    cout<< (k <= n * 4 ? n * 4 - k : 0);
    return 0;
}
