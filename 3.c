    #include <stdio.h>
    void main()
    {
        float  sensor_temp,critcal_temp=100,threashould_temp=80;
        printf("Enter temp: ");
        scanf("%f", &sensor_temp);
    if (sensor_temp <= threashould_temp)
    {
            printf(" is the noramal temp  for you ");
        } 
        else if ( sensor_temp > threashould_temp && sensor_temp < critcal_temp) 
        {
            printf(" in this temp you should stay at home");
        } 
        else {
            printf("emergency go to hospital");
        }
        

    }
