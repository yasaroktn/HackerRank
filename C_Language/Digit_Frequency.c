#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char *str;
    str = malloc(1024 * sizeof(char));
    int count[10] = {0};
    scanf("%s", str);
    str = realloc(str, strlen(str) + 1);
    for(int x = 0; str[x] != '\0'; x++){
        if (str[x] >= '0' && str[x] <= '9')
            count[str[x] - '0'] +=1;
    }    
    for(int y = 0; y <= 9; y++)
        printf("%d ", count[y]); 
    return 0;
}

