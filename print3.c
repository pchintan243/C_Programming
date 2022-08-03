#include <stdio.h>
int main()
{
    int i, j, k = 1, n, y;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i % 2 == 1)
            {
                printf("0 ");
            }
            else if(j%2==1)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}