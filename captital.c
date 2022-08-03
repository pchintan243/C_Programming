/* check the value is small letter, capital letter, number, special character.
*/

#include <stdio.h>
int main()
{   
    char val;
    printf("enter your value\n");
    scanf("%c",&val);
    printf("your value is %c\n",val);
    if (val >= 'a' && val <= 'z')
    {
        printf("your value is small latter %c",val);
    }
    else if (val >= 'A' && val <= 'Z')
    {
        printf("your value is capital latter %c",val);
    }
    else if (val >= 0 && val < 10)
    {
        printf("your value is number %c",val);
    }
   
    else
    {
        printf("your value is special character %c",val);
    }
    return 0;
}

/*    output :
enter your value
S
your value is S
your value is capital latter S     */