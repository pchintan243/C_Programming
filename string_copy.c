#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100];
    printf("enter the elements :");
    scanf("%s", &str1);
    strcpy(str2, str1);
    printf("your copied number is : %s", str2);
    return 0;
}


/*    OUTPUT :
enter the elements :CHINTAN
your copied number is : CHINTAN      */