#include <stdio.h>
int main()
{
    int i, n, j, k, a[100], b[100], c[100];
    printf("enter how many number u want to add");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("b[%d]=", i);
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i] + b[i]);
    }
    return 0;
}