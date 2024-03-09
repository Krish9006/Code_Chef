#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h;
    cin >> n >> h; 

    int width = 0;
    for (int i = 0; i < n; ++i) {
        int ai;
        cin >> ai; 

        if (ai <= h) {
            width += 1; 
        } else {
            width += 2; 
        }
    }

    cout << width << endl; 

    return 0;
}