#include <stdio.h>
int main()
{
    int x, y, z;
    printf("enter the value :\n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    printf("BITWISE and of %d and %d=%d\n", x, y, x & y);
    printf("BITWISE or of %d and %d=%d\n", x, y, x | y);
    printf("BITWISE xor of %d and %d=%d\n", x, y, x ^ y);
    printf("BITWISE not of %d=%d , %d=%d\n", x, ~x, y, ~y);
    printf("left shift operator of %d by 1 is %d\n", z, z << 1);
    printf("right shift operator of %d by 1 is %d\n", z, z >> 1);
    return 0;
}

/*   OUTPUT :
enter the value :
6
8
9
BITWOSE and of 6 and 8=0
BITWOSE or of 6 and 8=14
BITWOSE xor of 6 and 8=14
BITWOSE not of 6=-7 , 8=-9
left shift operator of 9 by 1 is 18
right shift operator of 9 by 1 is 4     */