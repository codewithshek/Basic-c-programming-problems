#include <stdio.h>

void main() {
    int subject1, subject2, subject3, subject4;
    float total, average;

    printf("Enter marks of student in 4 subjects: ");
    scanf("%d %d %d %d", &subject1, &subject2, &subject3, &subject4);

    total = subject1 + subject2 + subject3 + subject4;
    average = total / 4.0;

    if (average >= 75)
        printf("Grade of the student: First with Distinction\n");
    else if (average >= 65)
        printf("Grade of the student: First Class\n");
    else if (average >= 55)
        printf("Grade of the student: Second Class\n");
    else if (average >= 45)
        printf("Grade of the student: Third Class\n");
    else
        printf("Grade of the student: Pass Class\n");
}
