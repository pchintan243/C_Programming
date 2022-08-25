#include <stdio.h>
#include <math.h>
int main()
{
    int a,s,b,c,area;
    printf("Enter the value of a,b and c :\n");
    scanf("%d",&a);    
    scanf("%d",&b);    
    scanf("%d",&c);    
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is :%d",area);
    return 0;
}