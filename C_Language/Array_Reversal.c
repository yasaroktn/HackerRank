#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++)
        scanf("%d", arr + i);
    i --;
    while (i >= 0)
        printf("%d ", arr[i--]);
    return 0;
}
                                                    
~            
