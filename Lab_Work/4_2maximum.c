#include <stdio.h>
int main()
{
    int i,j,k,max=0;
    printf("Enter three number :");
    scanf("%d",&i);
    scanf("%d",&j);
    scanf("%d",&k);
    if(i>j)
    {
        if(i>k)
        {
            printf("maximum number is %d",i);
        }
        else
        {
            printf("maximum number is %d",j);
        }
    }
    else
    {
        if(j>k)
        {
            printf("maximum number is %d",j);
        }
        else
        {
            printf("maximum number is %d",k);
        }
    }
    
return 0;
}