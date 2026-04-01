#include <stdio.h>
int main(){
    float distance, speed, time;
    int h, m; 
    printf("--- Travel Time Estimator ---\n");
    printf("Please enter the total distance in km: ");
    scanf("%f", &distance);
    printf("Enter your average speed in km/h: ");
    scanf("%f", &speed);
    if (speed <= 0 || distance <= 0) {
    printf("Invalid input: Distance and speed must be greater than zero.\n");
    } else {
        time= distance/speed;
        h = (int)time;              
        m = (int)((time - h) * 60);
        printf("\n--- Journey Details ---\n");
        printf("At a speed of %.1f km/h, the trip will take:\n", speed);
        printf("%d hour(s) and %d minute(s).\n", h, m);
    }

    return 0;
}