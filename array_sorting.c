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
    printf("sorted is \n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}



/*   output :

enter your value :5
enter your elements :
a[0] =56
a[1] =54
a[2] =23
a[3] =67
a[4] =89
sorted is 
23
54
56
67
89       */