#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("enter your value :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = n - 1; j > i; j--)
        {
            printf(" ");
        }
        for (k = 0; k < n; k++)
        {
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}


/*     output :
enter your value :5
    * * * * * 
   * * * * *
  * * * * *
 * * * * *
* * * * *      */