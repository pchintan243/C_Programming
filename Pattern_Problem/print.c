#include <stdio.h>
int main()
{
    int i, j, k = 1, n, y;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d ", 2*(i+j)-3);
        }
        printf("\n");
    }
    return 0;
}