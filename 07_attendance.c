// Digital Attendance System
#include<stdio.h>
int main(){
    int working_days, presentdays=0, absentdays=0;
    int attendance, day;
    float attendancepercentage;

    printf("Enter total working days: ");
    scanf("%d", &working_days);

    for(day=1; day<=working_days; day++)
    {
        printf("Enter attendance for day %d (1=Present, 0=Absent): ", day);
        scanf("%d", &attendance);
        if(attendance==1){
            presentdays++;
        }
        else if(attendance==0){
            absentdays++;
        }
        else{
            printf("Invalid attendance! Enter 1 or 0.\n");
            day--;
        }
    }
    attendancepercentage = (presentdays * 100.0) / working_days;
    printf("\nTotal Present Days = %d", presentdays);
    printf("\nTotal Absent Days = %d", absentdays);
    printf("\nAttendance Percentage = %.2f%%", attendancepercentage);
    if(attendancepercentage >= 75)
    {
        printf("\nStudent meets the 75%% attendance requirement.");
    }
    else
    {
        printf("\nStudent does not meet the 75%% attendance requirement.");
    }
    return 0;
}