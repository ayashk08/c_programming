//C Program to Convert Hours into Minutes and Seconds
#include <stdio.h>

int main() {
    int hours, minutes, seconds;

    printf("Enter time in hours: ");
    scanf("%d", &hours);

    minutes = hours * 60;
    seconds = minutes * 60;

    printf("%d hours is equal to %d minutes or %d seconds.\n", hours, minutes, seconds);

    return 0;
}
