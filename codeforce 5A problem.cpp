#include<bits/stdc++.h>
using namespace std;

int main() {
    set<string> chat;
    string line;
    long long total = 0;
 while (getline(cin, line)) {
        if (line.empty()) continue;

        if (line[0] == '+') {
            chat.insert(line.substr(1));
        }
        else if (line[0] == '-') {
            chat.erase(line.substr(1));
        }
        else {
            int pos = line.find(':');
            string msg = line.substr(pos + 1);
            total += (long long)msg.size() * chat.size();
        }
    }

    cout << total;
    return 0;
}
