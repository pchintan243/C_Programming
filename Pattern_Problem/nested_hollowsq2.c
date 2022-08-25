#include <stdio.h>
int main()
{
    int i, j, n;
    printf("enter your value :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; n > j; j++)
        {
            if (i == 0 || j == 0 || i == j || i == n - 1 || j == n - 1 || i + j == n - 1)
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
enter your value :7
* * * * * * * 
* *       * *
*   *   *   *
*     *     *
*   *   *   * 
* *       * *
* * * * * * *     */