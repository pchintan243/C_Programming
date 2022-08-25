#include <stdio.h>
int main()
{
      int n, i, prime = 1;
      printf("enter a number :");
      scanf("%d", &n);
      for (i = 2; i < n; i++)
      {
            if (n % i == 0)
            {
                  prime = 0;
                  break;
            }
      }
      if (prime == 0)
      {
            printf("thsi is not a prime number ");
      }
      else
      {
            printf("this is a prime number ");
      }
      return 0;
}

/*   output :
enter a number :5
this is a prime number     
enter a number :6
thsi is not a prime number        */