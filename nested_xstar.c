#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("enter your number :");
    scanf("%d", &n);
    for (i = 1; i <=2 * n - 1; i++)
    {
        for (j = 1; j <= (2*n)-1; j++)
        {
            if (i == j)
            {
                printf("* ");
            }
            else if (i + j == 2 * n)
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


/*    output :
enter your number :5
*               * 
  *           *
    *       *     
      *   *
        *
      *   *
    *       *
  *           *
*               *       */