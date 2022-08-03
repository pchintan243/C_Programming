#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    printf("enter the first element :");
    scanf("%s", &str1);
    printf("enter the second element :");
    scanf("%s", &str2);
    strcmp(str1, str2);
    printf("comparison of %s", strcmp(str1, str2));
    return 0;
}

/*   output :
enter the first element :chintan 
enter the second element :chintan
comparison of (null)      */