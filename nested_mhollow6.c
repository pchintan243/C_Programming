#include <stdio.h>
int main()
{
    int i, j, f = 1, z, n;
    printf("enter your value :");
    scanf("%d", &n);
    for (j = 1; j <= n; j++)
    {
        for (z = 1; z <= j; z++)
        {
            printf(" ");
        }
        for (i = 1; i <= n; i++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

/*   output :
enter your value :5
 * * * * * 
  *       *
   *       *
    *       * 
     * * * * *     */