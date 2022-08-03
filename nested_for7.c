#include <stdio.h>
int main()
{
    int i, j, k, n = 4, z = 1;
    for (i = 1; i <= n; i++)
    {
        for (j = n - 1; j >= i; j--)
        {
            printf(" ");
        }
        for (k = i - 1; k >= -(i - 1); k--)
        {
            printf("%d", z - k);
        }
        z += 2;
        printf("\n");
    }
    return 0;
}


/* output :
   1
  234
 34567
45678910    */