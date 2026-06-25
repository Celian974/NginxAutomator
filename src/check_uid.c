#include "../include/nginx_automator.h"

int check_uid()
{
    int uid = getuid();

    printf("Verifying user...\n");
    sleep(1);

    if (uid == 0) {
        printf(COLOR_GREEN);
        printf("[✓] User is root.\n");
        printf(COLOR_RESET);
        sleep(1);
        return 0;
    } else {
        printf(COLOR_RED);
        printf("[𐄂] User is not root.\n");
        printf(COLOR_RESET);
        sleep(1);
        return 84;
    }
}