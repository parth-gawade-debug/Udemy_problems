// this program converts temp from celcius to farenheit and kelvin
#include <stdio.h>
int main() {
    float celcius, farenheit, kelvin;
    printf("Enter the temperature in celcius: ");
    scanf("%f", &celcius);
    farenheit = (celcius * 9 / 5) + 32;
    kelvin = celcius + 273.15;
    printf("Temperature in farenheit: %.2f\n", farenheit);
    printf("Temperature in kelvin: %.2f\n", kelvin);
    return 0;
}