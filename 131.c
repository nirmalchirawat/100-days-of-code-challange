/*Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.*/

#include <stdio.h>

enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main() {
    for (int i = SUNDAY; i <= SATURDAY; i++) {
        printf("Day %d: %d\n", i, i);
    }
    return 0;
}