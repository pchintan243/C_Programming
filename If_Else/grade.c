#include <stdio.h>
int main()
{
    int mark;
    printf("enter your marks:");
    scanf("%d",&mark);
    printf("your mark is: %d  \n",mark);
    if (mark >= 80 && mark <= 100)
    {
        printf("your grade is distinction %d",mark);
    }
    else if (mark >= 60 && mark <= 79)
    {
        printf("your grade is first class %d",mark);
    }
    else if (mark >= 40 && mark <= 59)
    {
        printf("your grade is second class %d",mark);
    }
    else
    {
        printf("you are fail %d",mark);
    }
  
    return 0;
}

/*   output:
enter your marks:90
your mark is: 90  
your grade is distinction 90      */