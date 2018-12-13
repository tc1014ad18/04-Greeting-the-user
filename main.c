#include <stdio.h>

int main() {
    int hour;

    printf("Hullo, mate!\n");
    printf("Can you please give me the hour?  Just the hour, mate.  I don't need the minutes.\n\n");
    printf("Hour (0-24): ");

    scanf("%d", &hour);

    if (hour > 2 && hour < 12) {
        printf("Good morning!\n");
    } else {
        if (hour >= 12 && hour < 19) {
            printf("Good afternoon!\n");
        } else {
            if (hour >= 19 && hour < 22) {
                printf("Good evening!\n");
            } else {
                printf("Good night!\n");
            }
        }
    }

    printf("Lovely interaction, mate! See you around.\n");
    return 0;
}