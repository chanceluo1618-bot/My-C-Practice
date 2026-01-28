#include <stdio.h>

int main(void) {
    unsigned long long n;
    if (scanf("%llu", &n) != 1) return 0;
    if (n < 2) { printf("%llu\n", n); return 0; }

    int first = 1;
    while (n % 2 == 0) {
        if (!first) printf(" * ");
        printf("2");
        first = 0;
        n /= 2;
    }

    for (unsigned long long p = 3; p * p <= n; p += 2) {
        while (n % p == 0) {
            if (!first) printf("*");
            printf("%llu", p);
            first = 0;
            n /= p;
        }
    }

    if (n > 1) {
        if (!first) printf("*");
        printf("%llu", n);
    }
    printf("\n");
    return 0;
}
