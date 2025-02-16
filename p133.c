//C program to Print Digital Clock with the Current Time
#include <stdio.h>
#include <time.h>

int main() {
    time_t rawtime;
    struct tm *timeinfo;

    while (1) {
        time(&rawtime);
        timeinfo = localtime(&rawtime);

        system("cls");  
        printf("Digital Clock\n");
        printf("%02d:%02d:%02d\n", timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);

        
        sleep(1);  
    }

    return 0;
}
