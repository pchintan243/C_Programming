#include <stdio.h>
int main()
{
    int i = 1, n, sum = 0;
    printf("enter lst number up to which you want to add number....  ");
    scanf("%d", &n);
loop:
{
    if (i <= n)
    {
        sum += i;
        i++;
        goto loop;
    }
    printf("sum = %d", sum);
}
    return 0;
}

/*   output :
enter lst number up to which you want to add number....  10
sum = 55      */