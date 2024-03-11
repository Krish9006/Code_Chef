#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    for (int i = 0; i < t; ++i) {
        int n, m, k;
        cin >> n >> m >> k;

        int left[n];
        int right[m];
        
        for (int j = 0; j < n; ++j) {
            cin >> left[j];
        }
        
        for (int j = 0; j < m; ++j) {
            cin >> right[j];
        }
        
        int count = 0;
        for (int x = 0; x < n; ++x) {
            for (int y = 0; y < m; ++y) {
                if (left[x] + right[y] <= k) {
                    count++;
                }
            }
        }
        
        cout << count << endl;
    }

    return 0;
}