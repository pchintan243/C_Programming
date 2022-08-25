#include <stdio.h>
int main()
{
    int i, j, r, c, a[100][100], b[100][100], sum[100][100];
    printf("enter row :");
    scanf("%d", &r);
    printf("enter coloum :");
    scanf("%d", &c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enter a%d%d:", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enter b%d%d:", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
            if (j == c - 1)
                printf("\n");
        }
    }
    return 0;
}


/*output :
enter row :2
enter coloum :2
enter a11:2
enter a12:3
enter a21:4
enter a22:5
enter b11:2
enter b12:3
enter b21:4
enter b22:5
4 6 
8 10      */