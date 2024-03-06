#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int u, v, a, s;
        cin >> u >> v >> a >> s;
        
        
        int final_velocity_squared = u * u - 2 * a * s;
        
        
        if (final_velocity_squared <= v * v) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}