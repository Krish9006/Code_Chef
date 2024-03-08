#include <iostream>
using namespace std;

string find_winner(int num) {
    if (num % 2 == 0 && num % 7 == 0) {
        return "Alice";
    } else if (num % 2 != 0 && num % 9 == 0) {
        return "Bob";
    } else {
        return "Charlie";
    }
}

int main() {
    int T;
    cin >> T; 

    for (int i = 0; i < T; i++) {
        int A;
        cin >> A; 
        string winner = find_winner(A);
        cout << winner << endl;
    }

    return 0;
}