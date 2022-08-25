#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("enter the elements :");
    scanf("%s", &str);
    strlwr(str);
    printf("in lower case: %s", str);
    return 0;
}


/*     output :
enter the elements :CHINTANPATEL
in lower case: chintanpatel    */