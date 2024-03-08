#include<bits/stdc++.h>
using namespace std;

string reverse_string(const string& str) {
    string reversed_str = str;
    reverse(reversed_str.begin(), reversed_str.end());
    return reversed_str;
}

int main() {
    string s, t;
    cin >> s >> t;

    if (t == reverse_string(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}