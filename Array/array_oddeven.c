#include <stdio.h>
int main()
{
    int i, j, k, n, m, a[100];
    printf("enter number :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\na[%d] =", i);
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            printf("your number is even");
        }
        else
        {
            printf("your number is odd");
        }
    }
    return 0;
}



/*     output :
enter number :4

a[0] =34
your number is even
a[1] =45
your number is odd
a[2] =56
your number is even
a[3] =67
your number is odd       */