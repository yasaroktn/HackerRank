#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
    int a;
    scanf("%d", &a);
    if (a <= 9){
        if (a == 1)
            printf("one");
        if (a == 2)
            printf("two");
        if (a == 3)
            printf("three");
        if (a == 4)
            printf ("four");
        if (a == 5)
            printf ("five");
        if (a == 6)
            printf ("six");
        if (a == 7)
            printf ("seven");
        if (a == 8)
            printf ("eight");
        if (a == 9)
            printf ("nine");
    }
    else 
        printf("Greater than 9");
    return(0);
}

