#include <stdio.h>

int main() {

    printf("Enter a digit: ");
    scanf("%d", &digit);

   
    if (digit < 0 || digit > 9) {
        printf("Invalid digit.\n");
        return 1;
    }

   
    if (digit == 0) {
        printf("The digit in words is: Zero\n");
    } else if (digit == 1) {
        printf("The digit in words is: One\n");
    } else if (digit == 2) {
        printf("The digit in words is: Two\n");
    } else if (digit == 3) {
        printf("The digit in words is: Three\n");
    } else if (digit == 4) {
        printf("The digit in words is: Four\n");
    } else if (digit == 5) {
        printf("The digit in words is: Five\n");
    } else if (digit == 6) {
        printf("The digit in words is: Six\n");
    } else if (digit == 7) {
        printf("The digit in words is: Seven\n");
    } else if (digit == 8) {
        printf("The digit in words is: Eight\n");
    } else {
        printf("The digit in words is: Nine\n");
    }

    return 0;
}
