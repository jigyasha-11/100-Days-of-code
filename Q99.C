//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    char date[20], day[3], month[3], year[5];
    
    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%s", date);

    // Extract day, month, year using sscanf
    sscanf(date, "%2s/%2s/%4s", day, month, year);

    char monthName[20];

    // Convert month number to month name
    if(strcmp(month, "01") == 0) strcpy(monthName, "Jan");
    else if(strcmp(month, "02") == 0) strcpy(monthName, "Feb");
    else if(strcmp(month, "03") == 0) strcpy(monthName, "Mar");
    else if(strcmp(month, "04") == 0) strcpy(monthName, "Apr");
    else if(strcmp(month, "05") == 0) strcpy(monthName, "May");
    else if(strcmp(month, "06") == 0) strcpy(monthName, "Jun");
    else if(strcmp(month, "07") == 0) strcpy(monthName, "Jul");
    else if(strcmp(month, "08") == 0) strcpy(monthName, "Aug");
    else if(strcmp(month, "09") == 0) strcpy(monthName, "Sep");
    else if(strcmp(month, "10") == 0) strcpy(monthName, "Oct");
    else if(strcmp(month, "11") == 0) strcpy(monthName, "Nov");
    else if(strcmp(month, "12") == 0) strcpy(monthName, "Dec");
    else strcpy(monthName, "Invalid");

    printf("Formatted Date: %s-%s-%s\n", day, monthName, year);

    return 0;
}
