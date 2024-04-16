#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int X = 0;
    for (int i = 0; i < n; i++) {
        string op;
        cin >> op;
        if (op == "++X" || op == "X++") {
            X++;
        } else if (op == "--X" || op == "X--") {
            X--;
        }
    }
    cout << X << endl;
    return 0;
}