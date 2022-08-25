#include <stdio.h>
int main()
{
    int a=0,b=1,c,f,n;
    for(int i=1;i<=8;i++)
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
return 0;
}