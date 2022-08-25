#include <stdio.h>
int main()
{
    int marks;
    printf("enter your marks and i will tell your grade :");
    scanf("%d", &marks);
    switch (marks / 10)
    {
    case 10:
    case 9:
        printf("your grade is distinction");
        break;
    case 8:
        printf("your grade is distinction");
        break;
    case 7:
        printf("your grade is first class");
        break;
    case 6:
        printf("your grade is first class");
        break;
    case 5:
        printf("your grade is second class");
        break;
    case 4:
        printf("your grade is second class");
        break;
    default:
        printf("your are fail");
    }
    return 0;
}



/*     output :
enter your marks and i will tell your grade :56
your grade is second class
enter your marks and i will tell your grade :79
your grade is first class     */