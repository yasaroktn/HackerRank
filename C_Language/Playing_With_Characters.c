#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char a[100];
    scanf("%c%s\n%[^\n]%*c", &ch, s, a);
    printf("%c\n%s\n%s", ch, s, a);
}

