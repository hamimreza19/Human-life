#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    char s[9];
    bool row[8] = {false}, col[8] = {false};
    for (int r = 0; r < 8; ++r)
    {
        cin>>s;
        for (int c = 0; c < 9; ++c)
        {
            if (s[c] == 'W')
            {
                row[r] = true;
                col[c] = true;
            }
        }
    }
    int answer = 16 - count(row, row + 8, true) - count(col, col + 8, true);
    if (answer == 16)
    {
        answer = 8;
    }
    cout<<answer;
    return 0;
}
