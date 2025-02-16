//C Program to Display Dates of Calendar Year in Different Formats
#include <stdio.h>

void printDate(int day, int month, int year) {
    printf("DD/MM/YYYY: %02d/%02d/%d\n", day, month, year);
    printf("MM/DD/YYYY: %02d/%02d/%d\n", month, day, year);
}

int main() {
    int year = 2025;  // Example year

    for (int month = 1; month <= 12; month++) {
        int daysInMonth;

        // Determine number of days in the month
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            daysInMonth = 31;
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            daysInMonth = 30;
        } else if (month == 2) {
            // Check for leap year
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                daysInMonth = 29;
            } else {
                daysInMonth = 28;
            }
        }

        // Print all dates for the current month
        for (int day = 1; day <= daysInMonth; day++) {
            printDate(day, month, year);
        }
    }

    return 0;
}
