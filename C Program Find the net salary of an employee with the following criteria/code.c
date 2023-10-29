#include <stdio.h>

int main() {

    // Declare variables
    float basicSalary, hra, da, ta, pt, netSalary;

    // Get user input
    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    // Calculate HRA, DA, and TA
    if (basicSalary <= 35000) {
        hra = 0.08 * basicSalary;
        da = 0.42 * basicSalary;
        ta = 2500;
        pt=200;
      
    } else if (basicSalary <= 54000) {
        hra = 0.10 * basicSalary;
        da = 0.54 * basicSalary;
        ta = basicSalary * 0.08;
        pt=400;
      
    } else {
        hra = 0.12 * basicSalary;
        da = 0.64 * basicSalary;
        ta = basicSalary * 0.15;
        pt=400;
    }

    // Calculate net salary
    netSalary = basicSalary + hra + da + ta - pt;

    // Print net salary
    printf("Net salary: %.2f\n", netSalary);

    return 0;
}
