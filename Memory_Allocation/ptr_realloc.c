#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, n;
    printf("Enter your value :");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d  of this array is\n", i);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value at %d of this array is %d\n", i, ptr[i]);
    }

    printf("Enter your new value :");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr ,n*sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value no %d  of this array is\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The new value at %d of this array is %d\n", i, ptr[i]);
    }
    return 0;
}