#include <stdio.h>
struct emp
{
    int eno;
    char ename[20];
    float esal;
};
void main()
{
    struct emp e={1001,"karthikl",59000};
    printf("emp details :\n");
    printf("eno: %d \n",e.eno);
    printf("esal: %s \n",e.ename);
    printf("ename: %f \n",e.esal);
}