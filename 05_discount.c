// Online Shopping discount system
#include <stdio.h>
int main() {
    float totalAmount, discount, finalAmount;
    int choice;
    int customerType;
    printf("Enter the customer type (1 for regular, 2 for premium): ");
    scanf("%d", &customerType); 

    printf("Welcome to the Online Shopping Discount System!\n");
    printf("Enter the total amount of your purchase: ");
    scanf("%f", &totalAmount);

    printf("___menu___\n");
    printf("1. Check Discount\n");
    printf("2. customer applicable discount\n");
    printf("3. delivery charges\n");
    printf("4. exit\n");

    printf("enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            if(totalAmount<1000) {
                printf("no discount is applicable for purchases below 1000.\n");
            }
            else if(totalAmount<5000) {
                discount=0.05*totalAmount;
                finalAmount=totalAmount-discount;
            }
            else if(totalAmount<10000) {
                discount=0.10*totalAmount;
                finalAmount=totalAmount-discount;
            }
            else {
                discount=0.20*totalAmount;
                finalAmount=totalAmount-discount;       
            }
            break;
        case 2:
            if(customerType==1) {
                printf("No extra discount is applicable for regular customers.\n");
            }
            else if(customerType==2) {
                finalAmount=finalAmount-0.5*finalAmount;
                printf("you are a premium customer and you are eligible for a discount of 5%% on your purchase.\n");
            }
            else {
                printf("invalid customer type.\n");
            }
            break;
        case 3:
            if(finalAmount<5000) {
                printf("delivery charges of 100 is applicable for purchases below 5000.\n");
                finalAmount=finalAmount+100;
            }
            else {
                printf("no delivery charges is applicable for purchases above 5000.\n");
            }
            break;
        case 4:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }
    return 0;
}