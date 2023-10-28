#include <stdio.h>
void main() {

  float taxable_income, tax_payable;

  printf("Enter taxable income: $");
  scanf("%f", &taxable_income);

  if (taxable_income <= 20000) {
    tax_payable = 0;
  } 
  else if (taxable_income <= 40000) {
    tax_payable = (taxable_income - 20000) * 0.10;
  } 
  else if (taxable_income <= 60000) {
    tax_payable = (40000 - 20000) * 0.10 + (taxable_income - 40000) * 0.20;
  } 
  else {
    tax_payable = (40000 - 20000) * 0.10 + (60000 - 40000) * 0.20 + (taxable_income - 60000) * 0.30;
  }

  printf("Tax payable: $%.2f\n", tax_payable);


}
