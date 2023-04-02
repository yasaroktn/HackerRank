#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>

int main() {
    int n ;
    scanf("%d", &n);
    int rows = 2*n -1;
    int tmp = n;
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows; j++){
            if ((i == 0) || (i == rows - 1))
                printf("%d ", n);
            else if (j == rows -1)
                    printf("%d ", tmp);
            else{
                printf("%d ", n);
                if (j < i)
                    n--;
                if (j >= rows - 1 - i)
                    n++;
                }
        }
        n = tmp;
        printf("\n");
    }
}

