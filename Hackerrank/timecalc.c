#include <stdio.h>
#include <time.h>

int main() {

    time_t current_time = time(NULL);


    char* time_string = ctime(&current_time);


    printf("Current Time: %s", time_string);

    return 0;
}
