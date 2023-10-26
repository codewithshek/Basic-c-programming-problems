#include <stdio.h>

void main() {
    int hours, minutes;

    printf("Enter hours: ");
    scanf("%d", &hours);

    printf("Enter minutes: ");
    scanf("%d", &minutes);

    if (hours >= 0 && hours < 5) {
        printf("Good Night\n");
    } else if (hours >= 5 && hours < 12) {
        printf("Good Morning\n");
    } else if (hours >= 12 && hours < 16) {
        printf("Good After Noon\n");
    } else if (hours >= 16 && hours < 20) {
        printf("Good Evening\n");      
    } else if (hours >= 20 && hours <= 23) {
        printf("Good Night\n");
    } else {
        printf("Invalid time\n");
    }
}
