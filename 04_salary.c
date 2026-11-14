//Employee Salary Calculation Program
#include <stdio.h>
int main() {
    float basicSalary, years_Of_Experience, hra, da, grossSalary,bonus,netSalary;
    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basicSalary);
    printf("Enter the years of experience: ");
    scanf("%f", &years_Of_Experience);

    // Calculate HRA (House Rent Allowance) as 20% of basic salary
    hra = 0.20 * basicSalary;

    // Calculate DA (Dearness Allowance) as 10% of basic salary
    da = 0.10 * basicSalary;
     // Calculate bonus based on years of experience
    if (years_Of_Experience >= 5) {
        bonus = 0.15 * grossSalary; // 15% bonus for 5 or more years of experience
    } else {
        bonus = 0.05 * grossSalary; // 5% bonus for less than 5 years of experience
    }

    // Calculate gross salary
    grossSalary = basicSalary + hra + da + bonus;
   


    printf("Basic Salary: %.2f\n", basicSalary);
    printf("HRA (20%%): %.2f\n", hra);
    printf("DA (10%%): %.2f\n", da);
    printf("Bonus: %.2f\n", bonus);
    printf("Gross Salary: %.2f\n", grossSalary);
    

    return 0;
}