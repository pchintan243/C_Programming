#include <stdio.h>
int main()
{
    int i, j, k = 0, n, y;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        // k=k+2;
        k+=i;
        for (j = k; j >k-i; j--)
        {
            printf("%d ",j);
            // k++;
        }
        printf("\n");
    }
    return 0;
}