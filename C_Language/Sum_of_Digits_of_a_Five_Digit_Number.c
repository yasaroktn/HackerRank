#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int res = n % 10;
    
    while(n >= 10){
        n /= 10;
        res += n % 10;
    }
    printf("%d", res);
    return 0;
}

