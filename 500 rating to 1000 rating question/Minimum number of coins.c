#include <stdio.h>

int main(void) {
                // your code goes here
                int t, x;
                scanf("%d", & t);
                for (int i = 0; i < t; i++)
                {
                        scanf("%d", & x);
                        if (x % 10 == 0) {
                                printf("%d\n", x / 10);
                        }
                        else if (x % 10 != 0) {
                                if (x % 5 == 0) {
                                        printf("%d\n", (x / 10) + (x % 10) / 5);
                                }
                                else {
                                        printf("-1");
                                }
                        }

                        return 0;
                }