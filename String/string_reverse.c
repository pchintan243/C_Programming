#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("enter the elements :");
    gets(str);
    strrev(str);
    printf("your reverse number is : %s", str);
    return 0;
}

/*   OUTPUT :
enter the elements :CHINTAN
your reverse number is : NATNIHC       */