/* check the decimal, hexadecimal and octal number  */

#include <stdio.h>
int main()
{
    int num;
    printf("enter decimal num :");
    scanf("%d",&num);
    printf("your decimal number is :%d\n",num);
    printf("your hexadecimal number is :%x\n",num);
    printf("your octal number is :%o\n",num);
    return 0;
}

/*   output :
enter decimal num :56 
your decimal number is :56
your hexadecimal number is :38
your octal number is :70     */