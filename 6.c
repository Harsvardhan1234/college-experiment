#include <stdio.h>
#include <stdio.h>

int main() 
{
    int mode;

    printf("Enter Robot Mode:\n");
    printf("1. Idle\n");
    printf("2. Active\n");
    printf("3. Error\n");
    printf("Enter your mode: ");
    scanf("%d", &mode);

    switch (mode) 
   {
        case 1:
            printf("Robot is in IDLE mode.\n");
            break;
        case 2:
            printf("Robot is in ACTIVE mode.\n");
            break;
        case 3:
            printf("Robot is in ERROR mode.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
