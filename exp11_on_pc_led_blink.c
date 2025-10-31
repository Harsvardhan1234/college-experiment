#include <stdio.h>
#include <windows.h>  

int main() {
    printf("Simulating LED Blink...\n\n");

    for (int i = 1; i <= 3; i++) {
        printf("LED ON\n");
        Sleep(2000);  
        printf("LED OFF\n");
        Sleep(2000);  
    }

    printf("\nSimulation Complete.\n");
    return 0;
}
