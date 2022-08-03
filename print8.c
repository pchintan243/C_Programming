#include <stdio.h>
int main()
{
    int i, j, k = 1, n, y, t;
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        y = i;
        t = k;
        for (j = n; j >= i; j--)
        {
            printf("%d ", t);
            t = t - y;
            y++;
        }
        k += i;
        printf("\n");
    }
    return 0;
}