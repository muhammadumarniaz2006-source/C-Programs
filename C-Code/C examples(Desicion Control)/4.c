#include <stdio.h>

int main() {
    int totalHours = 0;
    int available, shift;

    // Day 1
    printf("Day 1 availability (1=Yes, 0=No): ");
    scanf("%d", &available);
    printf("Day 1 shift hours: ");
    scanf("%d", &shift);

    totalHours += shift;

    if (shift > 8) 
    {
        printf("Day 1: Shift exceeds 8 hours\n");
    }
    if (shift > 0 && available == 0) 
    {
        printf("Day 1: Assigned shift but unavailable\n");
    }

    // Day 2
    printf("\nDay 2 availability (1=Yes, 0=No): ");
    scanf("%d", &available);
    printf("Day 2 shift hours: ");
    scanf("%d", &shift);

    totalHours += shift;

    if (shift > 8) 
    {
        printf("Day 2: Shift exceeds 8 hours\n");
    }
    if (shift > 0 && available == 0) 
    {
        printf("Day 2: Assigned shift but unavailable\n");
    }

    // Day 3
    printf("\nDay 3 availability (1=Yes, 0=No): ");
    scanf("%d", &available);
    printf("Day 3 shift hours: ");
    scanf("%d", &shift);

    totalHours += shift;

    if (shift > 8) 
    {
        printf("Day 3: Shift exceeds 8 hours\n");
    }
    if (shift > 0 && available == 0) 
    {
        printf("Day 3: Assigned shift but unavailable\n");
    }

    // Day 4
    printf("\nDay 4 availability (1=Yes, 0=No): ");
    scanf("%d", &available);
    printf("Day 4 shift hours: ");
    scanf("%d", &shift);

    totalHours += shift;

    if (shift > 8) 
    {
        printf("Day 4: Shift exceeds 8 hours\n");
    }
    if (shift > 0 && available == 0) 
    {
        printf("Day 4: Assigned shift but unavailable\n");
    }

    // Day 5
    printf("\nDay 5 availability (1=Yes, 0=No): ");
    scanf("%d", &available);
    printf("Day 5 shift hours: ");
    scanf("%d", &shift);

    totalHours += shift;

    if (shift > 8) 
    {
        printf("Day 5: Shift exceeds 8 hours\n");
    }
    if (shift > 0 && available == 0) 
    {
        printf("Day 5: Assigned shift but unavailable\n");
    }

    // Day 6
    printf("\nDay 6 availability (1=Yes, 0=No): ");
    scanf("%d", &available);
    printf("Day 6 shift hours: ");
    scanf("%d", &shift);

    totalHours += shift;

    if (shift > 8) 
    {
        printf("Day 6: Shift exceeds 8 hours\n");
    }
    if (shift > 0 && available == 0) 
    {
        printf("Day 6: Assigned shift but unavailable\n");
    }

    // Day 7
    printf("\nDay 7 availability (1=Yes, 0=No): ");
    scanf("%d", &available);
    printf("Day 7 shift hours: ");
    scanf("%d", &shift);

    totalHours += shift;

    if (shift > 8) 
    {
        printf("Day 7: Shift exceeds 8 hours\n");
    }
    if (shift > 0 && available == 0) 
    {
        printf("Day 7: Assigned shift but unavailable\n");
    }

    // Final weekly check
    printf("\n--- Weekly Validation ---\n");
    if (totalHours > 40) 
    {
        printf("Conflict: Exceeds 40 hours per week (Total = %d)\n", totalHours);
    } 
    else 
    {
        printf("✔ Weekly hours OK (Total = %d)\n", totalHours);
    }

    return 0;
}
