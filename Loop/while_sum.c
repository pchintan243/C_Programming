#include <stdio.h>
int main()
{
    int n, i = 1, sum = 0;
    printf("give integer number :");
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }

    printf("sum of %d numbers = %d\n", n, sum);
    return 0;
}

/*    output :
give integer number :10
sum of 10 numbers = 55      */