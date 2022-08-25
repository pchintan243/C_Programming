#include <stdio.h>
int main()
{
    int n,c,r,sum=0,limit;
    printf("Enter the number :");
    scanf("%d",&n);
    limit=n;
    while(n>0)
    {
        r=n%10;
        c=r*r*r;
        sum = sum +c;
        n=n/10;  
    }
    printf("Cube of sum is %d\n",sum);
    n=limit;
    if(n==sum)
    {
        printf("%d is armstrong number",n);
    }
    else 
    {
        printf("%d is not armstrong number",n);
    }
    return 0;
}