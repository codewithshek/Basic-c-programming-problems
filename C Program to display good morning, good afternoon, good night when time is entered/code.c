#include <stdio.h>

void main() {
    int hours, minutes;

    printf("Enter hours: ");
    scanf("%d", &hours);

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    if (hours >= 0 && hours < 9) {
        printf("Good Night\n");
    } else if (hours >= 9 && hours < 13) {
        printf("Good Morning\n");
    } else if (hours >= 13 && hours < 21) {
        printf("Good After Noon\n");
    } else if (hours >= 21 && hours <= 23) {
        printf("Good Night\n");
    } else {
        printf("Invalid time\n");
    }
}
