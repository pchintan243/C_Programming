#include <stdio.h>
int main()
{
    int i, j, k = 1, n;
    printf("enter your value :");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == n)
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
*     *
*   *
* *
*      */