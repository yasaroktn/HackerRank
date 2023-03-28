#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void calculate_the_maximum(int n, int k) {
    int i, j, and_max = 0, or_max = 0, xor_max = 0;
    for (i = 1; i < n; i++) {
        for (j = i + 1; j <= n; j++) {
            int and_res = i & j;
            if (and_res > and_max && and_res < k)
                and_max = and_res;

            int or_res = i | j;
            if (or_res > or_max && or_res < k)
                or_max = or_res;

            int xor_res = i ^ j;
            if (xor_res > xor_max && xor_res < k)
                xor_max = xor_res;
        }
    }
    printf("%d\n%d\n%d\n", and_max, or_max, xor_max);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}

