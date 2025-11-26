// Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main() {
    char date[11]; 
    printf("Enter date (dd/mm/yyyy): ");
    fgets(date, sizeof(date), stdin);

    date[strcspn(date, "\n")] = 0;

    char day[3], month[3], year[5];
    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strncpy(year, date + 6, 4);
    year[4] = '\0';

    char *month_names[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int month_index = atoi(month) - 1;

    printf("New date format: %s-%s-%s\n", day, month_names[month_index], year);

    return 0;
}
