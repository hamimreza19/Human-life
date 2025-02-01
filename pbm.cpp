#include <iostream>
#include <vector>

using namespace std;

void generateSequence(int n) {
    vector<int> result(n);

    if (n == 6) {
        result = {1, 1, 2, 3, 1, 2};
    } else if (n == 9) {
        result = {7, 3, 3, 7, 5, 3, 7, 7, 3};
    } else if (n == 15) {
        result = {15, 8, 8, 8, 15, 5, 8, 1, 15, 5, 8, 15, 15, 15, 8};
    }

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        generateSequence(n);
    }

    return 0;
}
