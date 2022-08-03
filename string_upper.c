#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("enter the elements :");
    scanf("%s", &str);
    strupr(str);
    printf("in upper case : %s", str);
    return 0;
}


/*    output :
enter the elements :patelchintan
in upper case : PATELCHINTAN    */