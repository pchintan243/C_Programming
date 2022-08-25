#include <stdio.h>
int main()
{
    int i, n, j, k, a[100],temp;
    printf("enter how many number u want to add");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("a[%d]=", i);
        scanf("%d", &a[i]);
    }
     for (i = 0; i < n - 1; i++) 
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                a[i] = temp;
                temp = a[j];
                a[i] = a[j];
            }
        }
    }
    printf("sorted is :\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}