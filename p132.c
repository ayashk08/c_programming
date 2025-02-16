//C Program to Format time in AM-PM format 
#include <stdio.h>

void formatTime(int hour, int minute, int second) {
    char ampm[3] = "AM";

    if (hour >= 12) {
        if (hour > 12) {
            hour -= 12;
        }
        strcpy(ampm, "PM");
    } else if (hour == 0) {
        hour = 12;
    }

    printf("Time in AM-PM format: %02d:%02d:%02d %s\n", hour, minute, second, ampm);
}

int main() {
    int hour, minute, second;

    printf("Enter time (24-hour format)\n");
    printf("Hour: ");
    scanf("%d", &hour);
    printf("Minute: ");
    scanf("%d", &minute);
    printf("Second: ");
    scanf("%d", &second);

    formatTime(hour, minute, second);

    return 0;
}
