#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <stdint.h>

int main() {

    /*
    double radius =  0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow (radius, 2);
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("Area: %0.2lf\n", area);
    printf("Surface Area: %0.2lf\n", surfaceArea);
    printf("Volume: %0.2lf\n", volume);

    */


    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("Compound Interest Calculator\n");

    printf("Enter the principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate % (r):");
    scanf("%lf", &rate);
    rate /= 100;
    
    printf("Enter the number of years (t): ");
    scanf("%d", &years);

    printf("Enter the number of times compounded per year (n): ");
    scanf("%d", &timesCompounded);

    total = principal * pow((1 + (rate / timesCompounded)), (timesCompounded * years));
    printf("After %d years, the total amount will be $%0.2lf \n", years, total);

    return 0;
}