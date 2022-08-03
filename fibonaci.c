#include <stdio.h>
int main() 
{
    int i=0,t, n, t1 = 0, t2 = 1;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Fibonacci Series upto %d number :",n+1);

    while (i <= n) 
    {
        printf("%d, ", t1);
        t = t1 + t2;
        t1 = t2;
        t2 = t;
        ++i;
    }
    return 0;
}


/*   output:
Enter the number : 10
Fibonacci Series upto 11 number :0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55,   */