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
    printf("enter thw position which you want to delete ");
    scanf("%d", &j);
    for (i = j - 1; i <= n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    for (i = 0; i < n - 1; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}