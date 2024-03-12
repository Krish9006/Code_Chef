#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 
    vector<int> opinions(n); 

    for (int i = 0; i < n; ++i) {
        cin >> opinions[i];
    }

    bool hard = false;
    for (int i = 0; i < n; ++i) {
        if (opinions[i] == 1) {
            hard = true;
            break;
        }
    }
    if (hard) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }

    return 0;
}