#include<bits/stdc++.h>
using namespace std;
void swapChars(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}
void permute(string str, int left, int right) {
    if (left == right) {
        cout << str << endl;
        return;
    }
    for (int i = left; i <= right; i++) {
        swapChars(str[left], str[i]);
        permute(str, left + 1, right);
        swapChars(str[left], str[i]);
    }
}
int main() {
    string str = "ABC";
    permute(str, 0, str.size() - 1);
    return 0;
}

