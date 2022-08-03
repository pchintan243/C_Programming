#include <stdio.h>
int main()
{
    int r, i, j, c, k, a[10][10], b[10][10], mul[10][10];
    printf("rows :");
    scanf("%d", &r);
    printf("coloums :");
    scanf("%d", &c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter the second matrix :");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("multiply of the matrix :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mul[i][j] = 0;
            for(k=0;k<c;k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}


/*    output :
a11=1
a12=2
a13=3

a21=4
a22=5
a23=6

a31=7
a32=8
a33=9

a11=1
a12=2
a13=3

a21=4
a22=5
a23=6

a31=7
a32=8
a33=9

30      36      42
66      81      96
102     126     150    */