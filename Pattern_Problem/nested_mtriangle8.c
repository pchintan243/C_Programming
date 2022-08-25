#include <stdio.h>
int main()
{
  int i, j, k;
  printf("how many rows u want in triangle :");
  scanf("%d", &k);
  for (i = 1; i <= k; i++)
  {
    for (j = 1; j <= (2 * k) - 1; j++)
    {
      if (j >= k - (i - 1) && j <= k + (i - 1))
      {
        printf("*");
      }
      else
        printf("  ");
    }
    printf("\n");
  }
  return 0;
}

/*     output :
how many rows u want in triangle :5
        *        
      ***
    *****    
  *******
*********     */