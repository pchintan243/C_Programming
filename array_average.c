#include <stdio.h>
int main()
{
    int i, n, a[100];
    float sum = 0, average;
    printf("enter how many number you want to sum :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[n]);
        sum = sum + a[n];
    }
    printf("your sum is :%f\n", sum);
    average = sum / n;
    printf("your %d number average is %f", n, average);
    return 0;
}

/*      output :
enter how many number you want to sum :4
a[0] = 45
a[1] = 56
a[2] = 67
a[3] = 78
your sum is :246.000000
your 4 number average is 61.500000        */