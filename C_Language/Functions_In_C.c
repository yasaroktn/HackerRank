#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int x[4] = {a, b, c, d};
    int res = x[0];
    for(int i=1;i < 4;i++)
    {
        if (res < x[i])
            res = x[i];
    }
    return(res);
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

