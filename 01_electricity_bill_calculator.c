#include<stdio.h>
int main() {
    float units, bill;
    printf("Enter the number of units consumed: ");
    scanf("%f", &units);


    if (units <= 100) {
        bill =100 + units * 2;
    } 
    else if (units <= 200) {
        bill = 100 + (100 * 2) + ((units - 100) * 3);
    } 
    else { 
        bill = 100 + (100 * 2) + (100 * 3) + ((units - 200) * 5);
    }

    printf("The electricity bill is: %.2f\n", bill);
    return 0;
}
