// this program will convert km to miles,meters,feet and inches
#include <stdio.h>
int main() {
    float km;
    printf("enter the distance in km :");
    scanf("%f", &km);
    float miles = km * 0.621371;
    float meters = km * 1000;
    float feet = km * 3280.84;
    float inches = km * 39370.1;
    printf("distance in miles :%f\n", miles);
    printf("distance in meters :%f\n", meters);
    printf("distance in feet :%f\n", feet);
    printf("distance in inches :%f\n", inches);
    return 0;
}