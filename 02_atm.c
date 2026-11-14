//ATM Withdrawl System
#include <stdio.h>
int main() {
    int pin, enteredPin, choice;
    int balance = 10000, withdrawAmount;

    printf("Welcome to the ATM!\n");
    printf("Please enter your PIN: ");
    scanf("%d", &enteredPin);

    // Assuming the correct PIN is 1234
    pin = 1234;

    if (enteredPin != pin) {
        printf("Incorrect PIN. Access denied.\n");
        return 0;
    }

    printf("PIN accepted. You can now perform transactions.\n");
    printf("1. Check Balance\n");
    printf("2. Withdraw Money\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Your current balance is: %.2f\n", balance);
            break;
        case 2:
            printf("Enter the amount to withdraw: ");
            scanf("%f", &withdrawAmount);
            if (withdrawAmount % 100 != 0) {
                printf("Please enter the amount in multiples of 100.\n");
            } else if (withdrawAmount > balance) {
                printf("Insufficient funds. Transaction failed.\n");
            } else {
                balance -= withdrawAmount;
                printf("Withdrawal successful. Your new balance is: %.2f\n", balance);
            }         
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
    }

    return 0;
}