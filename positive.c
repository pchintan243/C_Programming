#include <stdio.h>

int main()
{
    int a;
    printf("enter a number :");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("your number is positive");
    }
    else if (a < 0)
    {
        printf("your number is negative");
    }
    else
    {
        printf("your number is zero");
    }

    return 0;
}

/*   output :
enter a number :455
your number is positive    */