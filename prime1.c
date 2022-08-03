#include <stdio.h>
int main()
{
    int r = 0, n, i;
    printf("\nEnter positive no : ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            r = 1;
            break;
        }
    }
    if (n == 1)
    {
        printf(" 1 is neither prime nor composite");
    }
    else
    {
        if (r == 0)
            printf("%d is a prime number", n);
        else
        {
            printf("%d is not a prime number", n);
        }
    }

    return 0;
}

/*    output :
Enter positive no : 7
7 is a prime number   
Enter positive no : 6
6 is not a prime number         */