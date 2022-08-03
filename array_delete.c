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
    printf("enter the position which you want to delete :");
    scanf("%d", &d);
    for (i = d - 1; i <= n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    for (i = 0; i < n - 1; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}

/*    output :
enter how many number you want :
4
enter a number :a[0] = 4
enter a number :a[1] = 5
enter a number :a[2] = 6
enter a number :a[3] = 7
enter the position which you want to delete :2
4
6
7       */