#include <stdio.h>

// Define the Date structure
typedef struct {
    int day;
    int month;
    int year;
} Date;

// Function to compare two dates
int compareDates(Date d1, Date d2) {
    if (d1.day == d2.day && d1.month == d2.month && d1.year == d2.year) {
        return 1; // Dates are equal
    } else {
        return 0; // Dates are not equal
    }
}

int main() {
    Date date1, date2;

    // Get first date from the user
    printf("Enter first date (day month year): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    // Get second date from the user
    printf("Enter second date (day month year): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    // Compare dates
    if (compareDates(date1, date2)) {
        printf("Dates are equal\n");
    } else {
        printf("Dates are not equal\n");
    }

    return 0;
}
