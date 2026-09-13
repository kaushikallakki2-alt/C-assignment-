#include <stdio.h>
int main() {
    int a;
    float b;
    float base_distance;
    float m;
    float cm;
    float mm;
  
    printf("enter the speed in km/h: ");
    scanf("%d", &a);
    printf("enter the time in hours: ");
    scanf("%f", &b);

    base_distance = a * b;
    printf("the base distance is: %.2f\n", base_distance);

    m = base_distance * 1000;
    printf("the distance in meters is: %.2f\n", m);

    cm = base_distance * 100000;
    printf("the distance in centimeters is: %.2f\n", cm);

    mm = base_distance * 1000000;
    printf("the distance in millimeters is: %.2f\n", mm);

    return 0;




}