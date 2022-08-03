#include <stdio.h>
int main()
{
    int i, j, s, a, b;
    printf("enter your value :");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (s = 1; a - i >= s; s++)
        {
            printf(" ");
        }
        for (j = 1; j <= a; j++)
        {
            if (j == 1 || i == 1 || i == a || j == a)
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
enter your value :5
    * * * * * 
   *       *
  *       * 
 *       *
* * * * *     */