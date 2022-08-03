#include <stdio.h>
int main()
{
    int i, j, k = 1, n, y;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        k = i;
        y = n - i + 1;
        for (j = 1; j <= n; j++)
        {
            if (j % 2 == 1)
            {
                printf("%d ", k);
            }
            else
            {
                printf("%d ", y);
            }
            k += n;
            y += n;
        }
        printf("\n");
    }
    return 0;
}