#include <stdio.h>
int main()
{
    int i, j, k, n, z;
    printf("enter your value :");
    scanf("%d", &k);
    for (i = 1; i <= k; i++)
    {
        for (j = 1; i >= j; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= k; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


/*    output :
enter your value :5
 * * * * * 
  * * * * *
   * * * * *
    * * * * * 
     * * * * *    */