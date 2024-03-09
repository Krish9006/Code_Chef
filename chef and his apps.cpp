#include <bits/stdc++.h>
using namespace std;

int min_apps_to_delete(int S, int X, int Y, int Z) {
    int remaining_space = S - X - Y;
    if (remaining_space >= Z) {
        return 0;  
    } else {
        int apps_to_delete = (X + Y + Z - S) / min(X, Y);
        return apps_to_delete;
    }
}

int main() {
    int T;
    cin >> T;


    while (T--) {
        int S, X, Y, Z;
        cin >> S >> X >> Y >> Z; 
        cout << min_apps_to_delete(S, X, Y, Z) << endl;
    }

    return 0;
}