#include <stdio.h>
int main()
{
    int a;
    for (a = 1; a < 11; a++)
        printf("number : %d \n square : %d \n cube : %d \n ", a, a * a, a * a * a);
    return 0;
}



/*   output :
number : 1 
 square : 1
 cube : 1
 number : 2 
 square : 4
 cube : 8
 number : 3
 square : 9
 cube : 27
 number : 4
 square : 16
 cube : 64
 number : 5
 square : 25
 cube : 125
 number : 6 
 square : 36
 cube : 216
 number : 7
 square : 49
 cube : 343
 number : 8
 square : 64
 cube : 512
 number : 9
 square : 81
 cube : 729
 number : 10
 square : 100
 cube : 1000        */