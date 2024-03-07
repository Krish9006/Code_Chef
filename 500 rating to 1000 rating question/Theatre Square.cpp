#include <stdio.h>
#include <math.h>

int main() {
    int n, m, a;
    scanf("%d %d %d", &n, &m, &a);


    long long flagstones_needed = (long long) ceil((double) n / a) * (long long) ceil((double) m / a);

    printf("%lld\n", flagstones_needed);

    return 0;
}