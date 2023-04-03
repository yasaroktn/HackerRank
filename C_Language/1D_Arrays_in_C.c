#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int total_int;
    scanf("%d", &total_int);
    int *arry =(int*)malloc(total_int * sizeof(int));
    for (int i = 0; i < total_int; i++)
        scanf("%d", &arry[i]);
    int res = 0;
    for (int j = 0; j < total_int; j++)
        res += arry[j];
    printf("%d", res);
    free(arry);
    return 0;
}

