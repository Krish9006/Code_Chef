#include <stdio.h>

int main() {
    int T; // number of test cases
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N; // integer to be reversed
        scanf("%d", &N);

        int reversed = 0;
        while (N > 0) {
            reversed = reversed * 10 + N % 10;
            N /= 10;
        }
        printf("%d\n", reversed);
    }

    return 0;
}
