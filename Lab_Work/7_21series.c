#include <stdio.h>
int main()
{
    int n,i,limit;
    float sum=0.0,fact;
    n=1;
    printf("Enter number of terms :\n");
    scanf("%d",&limit);
    while(n<=limit)
    {
        fact=1;
        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
        sum=sum + (n/fact);
        n++;
    }
    printf("sum of %d terms is %f \'n",limit,sum);
return 0;
}