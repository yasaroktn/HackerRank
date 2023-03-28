#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    char *numstr[]= {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *eo[]= {"even", "odd"};
    scanf("%d\n%d", &a, &b);
    while (a <= b){
        if (a < 10)
            printf("%s\n", numstr[a % 10]);
        else {
            printf("%s\n", eo[a % 2]);
        }
        a++;
    }
    return 0;
}

