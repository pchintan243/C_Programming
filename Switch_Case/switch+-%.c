#include <stdio.h>
int main()
{
    int a, b;
    char action;
    printf("enter your process +-*%%/  :");
    scanf("%c", &action);
    printf("enter your two number :");
    scanf("%d %d", &a, &b);
    switch (action)
    {
    case '+':
        printf("process is two number addition : %d", a + b);
        break;
    case '-':
        printf("process is two number subtraction : %d", a - b);
        break;
    case '*':
        printf("process is two number multiplication : %d", a * b);
        break;
    case '/':
        printf("process is two number division : %d", a / b);
        break;
    case '%':
        printf("process is two number percentage : %d", a % b);
        break;
    default:
        printf("wrong input");
    }
    return 0;
}


/*   output :
enter your process +-*%/  :*  
enter your two number :4 5
process is two number multiplication : 20      */