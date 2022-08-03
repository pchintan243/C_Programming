#include <stdio.h>
int main()
{
    int i, j, k = 1, n, y;
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = i; j <= n; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}