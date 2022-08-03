#include <stdio.h>
int main()
{
    int i, d, a[100], b[100], c[100], n;
    printf("enter your value :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("a[%d] =", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] =", i + 1);
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
        printf("%d + %d =%d\n", a[i], b[i], c[i]);
    }
    return 0;
}



/*     output :
enter your value :5
a[1] =45
a[2] =54
a[3] =67
a[4] =76
a[5] =87

a[1] =76
a[2] =54
a[3] =43
a[4] =56
a[5] =65
45 + 76 =121
54 + 54 =108
67 + 43 =110
76 + 56 =132
87 + 65 =152     */