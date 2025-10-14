#include <stdio.h>

int main() {
    int day, corruption;

    printf("---- Data Backup Scheduler (7-Day Cycle) ----\n");

    // Day 1
    printf("\nDay 1: Is corruption detected? (1=Yes, 0=No): ");
    scanf("%d", &corruption);
    if (corruption == 1) {
        printf("Corruption found! FULL Backup triggered.\n");
    } else {
        printf("Incremental Backup taken.\n");
    }

    // Day 2
    printf("\nDay 2: Is corruption detected? (1=Yes, 0=No): ");
    scanf("%d", &corruption);
    if (corruption == 1) {
        printf("Corruption found! FULL Backup triggered.\n");
    } else {
        printf("Incremental Backup taken.\n");
    }

    // Day 3
    printf("\nDay 3: Is corruption detected? (1=Yes, 0=No): ");
    scanf("%d", &corruption);
    if (corruption == 1) {
        printf("Corruption found! FULL Backup triggered.\n");
    } else {
        printf("Incremental Backup taken.\n");
    }

    // Day 4
    printf("\nDay 4: Is corruption detected? (1=Yes, 0=No): ");
    scanf("%d", &corruption);
    if (corruption == 1) {
        printf("Corruption found! FULL Backup triggered.\n");
    } else {
        printf("Incremental Backup taken.\n");
    }

    // Day 5
    printf("\nDay 5: Is corruption detected? (1=Yes, 0=No): ");
    scanf("%d", &corruption);
    if (corruption == 1) {
        printf("Corruption found! FULL Backup triggered.\n");
    } else {
        printf("Incremental Backup taken.\n");
    }

    // Day 6
    printf("\nDay 6: Is corruption detected? (1=Yes, 0=No): ");
    scanf("%d", &corruption);
    if (corruption == 1) {
        printf("Corruption found! FULL Backup triggered.\n");
    } else {
        printf("Incremental Backup taken.\n");
    }

    // Day 7 (Full backup must be done anyway)
    printf("\nDay 7: Is corruption detected? (1=Yes, 0=No): ");
    scanf("%d", &corruption);
    if (corruption == 1) {
        printf("Corruption found! FULL Backup triggered.\n");
    } else {
        printf("Weekly FULL Backup taken.\n");
    }

    printf("\nBackup cycle complete.\n");
    return 0;
}
