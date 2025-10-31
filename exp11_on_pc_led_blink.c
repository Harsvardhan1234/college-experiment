#include <stdio.h>
#include <windows.h>  // For Sleep() function on Windows

int main() {
    printf("Simulating LED Blink...\n\n");

    for (int i = 1; i <= 3; i++) {
        printf("LED ON\n");
        Sleep(2000);  // Wait 2 seconds (2000 milliseconds)

        printf("LED OFF\n");
        Sleep(2000);  // Wait 2 seconds
    }

    printf("\nSimulation Complete.\n");
    return 0;
}
