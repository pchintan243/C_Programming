#include <stdio.h>

int main()
{
    int a,b;
    printf("your a and b subject marks:");
    scanf("%d\n %d",&a,&b);
    printf("if you pass in exam and you are eligible for gift\n");

    if(a >= 40 && b >= 40)
    {
        printf("you get a gift 45 rupees");
    }
    else if(a > 40 && b < 40)
    {
        printf("you get a gift 15 rupees");
    }
    else
    {
        printf("you get a gift 20 rupees");
    }
    return 0;
}

/* output:
your a and b subject marks:45
50
if you pass in exam and you are eligible for gift
you get a gift 45 rupees      */