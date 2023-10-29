#include <stdio.h>

void main() {
    int any_breakfast, addOn, dosa, total;

    printf("no. of breakfast other than dosa: ");
    scanf("%d", &any_breakfast);

    printf("no. of dosa: ");
    scanf("%d", &dosa);

    printf("no. of add on: ");
    scanf("%d", &addOn);

    if((any_breakfast > 0) || (addOn > 0) || (dosa > 0) ){
        total = (10 * addOn)+(50 * any_breakfast)+(80 * dosa);
        
    }    

    printf("The total bill for your breakfast is: %d Rs\n", total);

}
