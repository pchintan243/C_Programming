#include<stdio.h>
int main()
{
    int num,a=2002001;
    printf("enter a enrollment number:");
    scanf("%d",&num);

    do
    {
        printf("%d\n",a);
        a = a + 1;
    } while (a<num);
    
    return 0;
}

/*  output :
enter a enrollment number:2002011
2002001
2002002
2002003
2002004
2002005
2002006
2002007
2002008
2002009
2002010
*/