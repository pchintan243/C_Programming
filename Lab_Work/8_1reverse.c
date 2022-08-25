#include <stdio.h>
int main()
{
    int i, n, j, k, a[100];
    printf("enter how many number u want to add");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
    for (i = n-1; i >=0; i--)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}