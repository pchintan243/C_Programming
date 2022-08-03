#include <stdio.h>
int main()
{
    int i,n,prime=1;
    printf("Enter your number :")    ;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%2==0)
        {
            prime=0;
            break;
        }
    }
    if(prime==0)
    {
        printf("%d is not a prime number",n);
    }
    else
    {
        printf("%d is a prime number",n);
    }
    
return 0;
}