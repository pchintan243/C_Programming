#include<stdio.h>
int main()
{
    int n,digit,sum=0;
    printf("give positive integer number :");
    scanf("%d",&n);
    if(n<0)
    {
       printf("give positive number");
    }
    else
    {
        do
        {
            digit=n%10;
            sum=sum+digit;
            n=n/10;
        } while (n>0);
        printf("sum = %d\n",sum);
        
    }
    return 0;
}

/*    output :
give positive integer number :78
sum = 15       */