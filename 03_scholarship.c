//Student Scholarship Eligibility Program
#include <stdio.h>
int main() {
    int marks,attendance;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    printf("Enter your attendance percentage: ");
    scanf("%d", &attendance);
    while (marks<100 && attendance>=75) {
        if(marks >= 90 ) {
            printf("You are eligible for a scholarship of 100%%.\n");
        }
         else if (marks >= 80) {
            printf("You are eligible for a scholarship of 75%%.\n");
        }
         else if (marks >= 70) {
            printf("You are eligible for a scholarship of 50%%.\n");
        }
         else if (marks >= 60) {
            printf("You are eligible for a scholarship of 25%%.\n");
        } 
        else {
            printf("You are not eligible for any scholarship.\n");
        }

    }
}    