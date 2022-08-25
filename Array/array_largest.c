#include <stdio.h>
int main()
{
    int i,large,small,n,a[100];
    printf("enter number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter number a[%d] =",i);
        scanf("%d",&a[i]);
    }
    large=small=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>large)
        {
            large=a[i];
        }
        else if(a[i]<small)
        {
            small=a[i];
        }    
    }
    printf("the smallest element is %d\n",small);
    printf("the largest element is %d\n",large);
return 0;
}


/*    output :
enter number:5
enter number a[0] =54
enter number a[1] =45
enter number a[2] =66
enter number a[3] =77
enter number a[4] =33
the smallest element is 33
the largest element is 77       */