#include <stdio.h>
int main()
{
    int a[6], i, n;
    printf("please enter how many number you want :\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter a number : a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("reverse no.\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("a[%d] =", i);
        printf("%d\n", a[i]);
    }
    return 0;
}


/*   output :
please enter how many number you want :
5
Enter a number : a[0] = 54
Enter a number : a[1] = 56
Enter a number : a[2] = 67
Enter a number : a[3] = 78
Enter a number : a[4] = 87
reverse no.
a[4] =87
a[3] =78
a[2] =67
a[1] =56
a[0] =54      */