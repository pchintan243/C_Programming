#include <stdio.h>
int main()
{
    int a, n, f = 1, sum = 0,limit;    
    printf("Enter the number ");
    scanf("%d", &n);
    limit=n;
    while (n > 0)
    {
        f=1;
        a = n % 10;
        for (int j = a; j >= 1; j--)
        {
            f = f * j;
        }
        sum = sum + f;
        n = n / 10;
    }
    printf("your number sum is %d\n", sum);
    n=limit;
    if(n==sum)
    {
        printf("%d is strong  number ",n);
    }
    else 
    {
        printf("%d is not a strong number ",n);
    }
    return 0;
}