#include <stdio.h>
int main()
{
    int i, j, n;
    printf("enter your value :");
    scanf("%d", &n);
    for (i = n; i >= 1; --i)
    {
        for (j = 1; i >= j; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}



/*     output :
enter your value :5
12345
1234
123
12
1      */