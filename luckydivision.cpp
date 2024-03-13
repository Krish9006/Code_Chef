#include <iostream>
#include <string>
using namespace std;

bool is_almost_lucky(int n) {
    string lucky_digits = "47";
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            string num_str = to_string(i);
            bool is_lucky = true;
            for (char c : num_str) {
                if (lucky_digits.find(c) == string::npos) {
                    is_lucky = false;
                    break;
                }
            }
            if (is_lucky) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    if (is_almost_lucky(n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}