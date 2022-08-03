#include <stdio.h>
int sum(int a,int b);
int main()
{
    int c;
    sum(10, 12);
    return 0;
}
int sum(int a, int b)
{
    int result;
    result = a+b;
    printf("%d",result);
    
    return result;
}