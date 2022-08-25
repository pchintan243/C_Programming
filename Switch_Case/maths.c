#include <stdio.h>
#include <math.h>
int main()

{
    float a, b, c;
    float root1, root2, imaganary;
    float discriminant;

    printf("Enter the coefficiant of x^2, x and constant term\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    discriminant = (b * b) - (4 * a * c);

    switch (discriminant > 0)
    {
    case 1:
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Two roots are %.2f and %.2f", root1, root2);
        break;

    default:
        break;
    }

    switch (discriminant < 0)
    {

    case 1:
        root1 = root2 = -b / (2 * a);
        imaganary = sqrt(-discriminant) / (2 * a);
        printf("two roots are %.2f+i%.2f and %.2f-i%.2f", root1, imaganary, root2, imaganary);
        break;
    default:
        break;
    }
    return 0;
}

/*    output :
Enter the coefficiant of x^2, x and constant term
4    
5
1
Two roots are -0.25 and -1.00       */