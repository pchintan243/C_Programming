#include <stdio.h>
int main()
{
    int i, r = 0, n;
    printf("Enter a number you want to reverse :");
    scanf("%d", &n);
    while (n != 0)
    {
        i = n % 10;
        r = r * 10 + i;
        n = n / 10;
    }
    printf("Your reverse number is %d", r);
    return 0;
}