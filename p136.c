//C Program to Maximize Time by Replacing ‘_’ in a Given 24-Hour Format Time
#include <stdio.h>

void maximizeTime(char *time) {
    if (time[0] == '_') {
        if (time[1] >= '4' && time[1] <= '9') {
            time[0] = '1';
        } else {
            time[0] = '2';
        }
    }
    if (time[1] == '_') {
        if (time[0] == '2') {
            time[1] = '3';
        } else {
            time[1] = '9';
        }
    }
    if (time[3] == '_') {
        time[3] = '5';
    }
    if (time[4] == '_') {
        time[4] = '9';
    }
}

int main() {
    char time[6];
    printf("Enter time in 24-hour format (use '_' for unknown digits): ");
    scanf("%5s", time);

    maximizeTime(time);
    
    printf("Maximized time: %s\n", time);
    
    return 0;
}
