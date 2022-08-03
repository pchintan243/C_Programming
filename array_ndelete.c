#include <stdio.h>
int main()
{
    int i, n, a[100], d;
    printf("enter how many number you want :\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter a number :a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("enter the number which you want to delete :");
    scanf("%d", &d);
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] == d)
            break;
    }
    for (i; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    printf("your numbers after delete :\n");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}

/*    output :
enter how many number you want :
4
enter a number :a[0] = 43
enter a number :a[1] = 45
enter a number :a[2] = 66
enter a number :a[3] = 67
enter the number which you want to delete :66
your numbers after delete :
43
45
67      */