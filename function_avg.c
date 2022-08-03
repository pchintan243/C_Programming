#include <stdio.h>
float average(int a, int b, int c);
int main()
{
    int a,b,c;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);
    printf("Enter the third number :");
    scanf("%d",&c);
    printf("Average of three number :%f",average(a,b,c));
    return 0;
}
float average(int a ,int b, int c)
{
    float result;
    result=(float)(a+b+c)/3;
    return result;
}