#include <stdio.h>
int main()
{
    int i, j, a[100], n, temp;
    printf("enter your value :");
    scanf("%d", &n);
    printf("enter your elements :\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] =", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++) 
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
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