#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    printf("enter your surname :");
    scanf("%s", &str1);
    printf("enter your name :");
    scanf("%s", &str2);
    strcat(str1, str2);
    printf("your full name is :%s", str1);
    return 0;
}


/*    output :
enter your surname :patel
enter your name :chintan
your full name is :patelchintan      */