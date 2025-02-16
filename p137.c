//C Program to Convert the Local Time to GMT
#include <stdio.h>
#include <time.h>

int main() {
    time_t local_time;
    struct tm *tm_info;
    char gmt_time[50];

    // Get the current local time
    time(&local_time);
    tm_info = localtime(&local_time);

    // Convert to GMT (UTC)
    strftime(gmt_time, sizeof(gmt_time), "%a, %d %b %Y %H:%M:%S GMT", gmtime(&local_time));

    printf("Local Time: %s", asctime(tm_info));
    printf("GMT Time: %s\n", gmt_time);

    return 0;
}
