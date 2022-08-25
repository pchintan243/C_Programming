#include <stdio.h>
int main()
{
    int i, j, k;
    printf("enter your value :");
    scanf("%d", &k);
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", k);
            k++;
        }
        printf("\n");
    }
    return 0;
}


/*   output :
enter your value :1
1
23
456
78910    */