#include <stdio.h>
int main()
{
    int i, j, n;
    printf("enter your value :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}

/*    output :
enter your value :6
1
12
123
1234
12345
123456        */