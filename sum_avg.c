#include <stdio.h>
int main()
{
  int i, n, Sum = 0, numbers;
  float Average;

  printf("\nPlease Enter How many Number you want?\n");
  scanf("%d", &n);

  printf("\nPlease Enter the elements one by one\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &numbers);
    Sum = Sum + numbers;
  }
  Average = Sum / n;
  printf("\nSum of the %d Numbers = %d", n, Sum);
  printf("\nAverage of the %d Numbers = %.2f", n, Average);
  return 0;
}



/*    output :
Please Enter How many Number you want?
3

Please Enter the elements one by one
12
34
32

Sum of the 3 Numbers = 78
Average of the 3 Numbers = 26.00      */