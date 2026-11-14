//bank account transaction system
#include <stdio.h>
int main() {
    int balance = 5000, choice, deposit, withdraw;
    printf("Welcome to the Bank!\n");
    printf("Your current balance is: %d\n", balance);
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    printf("___menu___\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Check Balance\n");
    printf("4. Exit\n");
   do{
     switch(choice) {
        case 1:
            printf("Enter the amount to deposit: ");
            scanf("%d", &deposit);
            balance += deposit;
            printf("Your new balance is: %d\n", balance);
            break;
        case 2:
            printf("Enter the amount to withdraw: ");
            scanf("%d", &withdraw);
            if(withdraw <= balance) {
                balance -= withdraw;
                printf("Your new balance is: %d\n", balance);
            } else {
                printf("Insufficient funds!\n");
            }
            break;
        case 3:
            printf("Your current balance is: %d\n", balance);
            break;
        case 4:
            printf("Exiting...\n");
            break;    
        default:
            printf("Invalid choice!\n");
        }
    }
    while(choice!=4);
    return 0;

}