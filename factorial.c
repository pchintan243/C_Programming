#include <stdio.h>
 
int main()
{
  int c,a, f = 1;
 
  printf("Enter a number:");
  scanf("%d", &a);
  for (c = 1; c <= a; c++)
    f = f * c;
 
  printf("Factorial of %d = %d\n", a, f);
 
  return 0;
}

/* output:
Enter a number:7
Factorial of 7 = 5040 */