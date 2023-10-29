#include <stdio.h>

void main(){
    int num1, num2, num3;
    int x, y, z;
    printf("Enter the numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if (num1 < num2) {
        if (num1 < num3) {
            x = num1;
            if (num2 < num3) {
                y = num2;
                z = num3;
            } else {
                y = num3;
                z = num2;
            }
        } else {
            x = num3;
            y = num1;
            z = num2;
        }
    } else {
        if (num2 < num3) {
            x = num2;
            if (num1 < num3) {
                y = num1;
                z = num3;
            } else {
                y = num3;
                z = num1;
            }
        } else {
            x = num3;
            y = num2;
            z = num1;
        }
    }
    // Assign the output back to the original variables
    num1 = x;
    num2 = y;
    num3 = z;
    printf("Numbers in ascending order: %d, %d, %d\n", num1, num2, num3);
}
