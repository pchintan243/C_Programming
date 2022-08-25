#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("enter your value :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i<=j)
            {
                printf("%d",j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}



/*   output :
enter your value :5
12345
 2345
  345
   45
    5      */