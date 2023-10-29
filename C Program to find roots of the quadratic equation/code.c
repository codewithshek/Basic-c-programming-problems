#include <stdio.h>
#include <math.h>

void main() {
    float a, b, c, discriminant, realPart, unequal;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant == 0) {
        realPart = (-b) / (2 * a);
        printf("Roots are real and equal: %f\n", realPart);
    } 
    else if (discriminant > 0) {
        realPart = (-b + sqrt(discriminant)) / (2 * a);
        unequal = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and unequal: %f and %f\n", realPart, unequal);
    } 
    else {
        printf("Roots are imaginary, error roots can't be displayed");
    }

}
