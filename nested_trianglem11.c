#include <stdio.h>
int main()
{
    int i, j, k, n, m;
    printf("enter your value :");
    scanf("%d", &n);
    m = n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; i > j; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= m; k++)
        {
            if (i == 1 || k == 1 || k == m)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        m--;
        printf("\n");
    }
    return 0;
}

/*    output :
enter your value :5
*****
 *  *
  * *
   **
    *     */