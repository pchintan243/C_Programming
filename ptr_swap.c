#include <stdio.h>
void swap(int *ptr1, int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main()
{
    int num1, num2;
    int temp;
    printf("Enter the two pointer :");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("Before swapping num1: %d, num2: %d\n", num1, num2);

    swap(&num1, &num2);
    printf("After swapping num1: %d, num2: %d", num1, num2);
    return 0;
}