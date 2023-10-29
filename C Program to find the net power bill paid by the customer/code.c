#include <stdio.h>

int main() {

  // Declare variables
  int units_consumed, net_bill;

  // Get user input
  printf("Enter the number of units consumed: ");
  scanf("%d", &units_consumed);

  // Calculate net bill using an else-if ladder
  if (units_consumed <= 200) {
    net_bill = units_consumed * 5.85;
  } else if (units_consumed <= 300) {
    net_bill = (200 * 5.85) + ((units_consumed - 200) * 8.75);
  } else if (units_consumed <= 400) {
    net_bill = (200 * 5.85) + (100 * 8.75) + ((units_consumed - 300) * 9.25);
  } else {
    net_bill = (200 * 5.85) + (100 * 8.75) + (100 * 9.25) + ((units_consumed - 400) * 12);
  }

  // Print net bill
  printf("Net power bill: Rs.%d\n", net_bill);

  return 0;
}
