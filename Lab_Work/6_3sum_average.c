#include <stdio.h>
int main()
{
    int n,i,sum=0,j;
    float average;
    printf("How many number you want to sum :");
    scanf("%d",&n);
    printf("Enter the number one by one :\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&j);
        sum=sum+j;
    }
    printf("Your %d number sum is %d\n",n,sum);
    average =sum/n;
    printf("Your %d number average is %f",n,average);
return 0;
}