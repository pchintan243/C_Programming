#include <stdio.h>
int main()
{
    int month;
    printf("enter your num :");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
        printf("january");
        break;
    case 2:
        printf("february");
        break;
    case 3:
        printf("march");
        break;
    case 4:
        printf("april");
        break;
    case 5:
        printf("may");
        break;
    case 6:
        printf("june");
        break;
    case 7:
        printf("july");
        break;
    case 8:
        printf("august");
        break;
    case 9:
        printf("september");
        break;
    case 10:
        printf("octomber");
        break;
    case 11:
        printf("novamber");
        break;
    case 12:
        printf("december");
        break;
    default:
        printf("other");
    }
    return 0;
}

/*     output :
enter your num :4
april      */