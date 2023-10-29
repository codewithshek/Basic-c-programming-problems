#include <stdio.h>
#include <math.h>

void main() {
    float a, b, c, discriminant, realPart, unequal, imaginaryPart;

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
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are imaginary. The roots are %.2f+%.2fi and %.2f-%.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

}
