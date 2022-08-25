#include <stdio.h>
int main()
{
    int a, e, i, o, u;
    char ch;
    printf("enter your alphabet :");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
        printf("your alphabet is wovel");
        break;
    case 'e':
        printf("your alphabet is wovel");
        break;
    case 'i':
        printf("your alphabet is wovel");
        break;
    case 'o':
        printf("your alphabet is wovel");
        break;
    case 'u':
        printf("your alphabet is wovel");
        break;
    default:
        printf("your alphabet is not wovel");
    }
    return 0;
}

/*    output :
enter your alphabet :a
your alphabet is wovel

enter your alphabet :r
your alphabet is not wovel       */