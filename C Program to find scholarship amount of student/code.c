#include <stdio.h>

void main() {
    float tuitionFee, scholarship_Amount;
    char grade;

    printf("Enter the tuition fee: ");
    scanf("%f", &tuitionFee);

    printf("Enter the grade: ");
    scanf(" %c", &grade);

    if(grade == 'O' || grade == 'o') {
        scholarship_Amount = tuitionFee * 0.60;
    }
    else if(grade == 'A' || grade == 'a') {
        scholarship_Amount = tuitionFee * 0.50;
    }
    else if(grade == 'B' || grade == 'b') {
        scholarship_Amount = tuitionFee * 0.30;
    }
    else if(grade == 'C' || grade == 'c') {
        scholarship_Amount = 0;
    }
    else {
        printf("Invalid grade.\n");
    }

    printf("The scholarship amount obtained by the student is: %.2f\n", scholarship_Amount);
}
