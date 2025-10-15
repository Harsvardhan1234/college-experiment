
// Function to calculate average of 5 readings
float calculateAverage(float readings[], int size) 
{
    float sum = 0;
    for(int i = 0; i < size; i++) {
        sum += readings[i];
    }
    return sum / size;
}

int main() 
{
    float readings[5];
    int i;

    printf("Enter 5 sensor readings: ");
    for(i = 0; i < 5; i++) {
        scanf("%f", &readings[i]);
    }

    float average = calculateAverage(readings, 5);
    printf("Average Sensor Reading = %.2f\n", average);

    return 0;
}
