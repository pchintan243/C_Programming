#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("enter your value :");
    scanf("%d", &n);
    
    for (i = 1; i <= (2*n)-1; i++)
    {
        for (j = 1; j <= (2*n)-1; j++)
        {
            if (j == n || i==n)
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
enter your value :4
      *       
      *
      *       
* * * * * * *
      *
      *
      *        */