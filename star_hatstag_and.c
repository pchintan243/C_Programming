#include <stdio.h>
void main()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 4)
            {
                printf("# ");
            }
            else if (i == 4 && j == 3)
            {
                printf("* ");
            }
            else if (i + j == 5 || (i + j == 6 && i != 1))
            {
                printf("* ");
            }
            else if (i == 4 || (i == 2 && j == 5) || (i == 3 && j == 5) || (i == 3 && j == 6))
            {
                printf("& ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

/*    OUTPUT :
  #       
    * # &
  * * # & &
* * * # & & &      */