#include <stdio.h>

int main() {
    long long x, y;
    while (scanf("%lld%lld", &x, &y) == 2) {
        printf("%lld\n", y < x ? x - y : y - x);
    }

    return 0;
}
