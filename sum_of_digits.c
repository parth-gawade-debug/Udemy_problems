// in this program we will find the sum of  digits of a number
#include <stdio.h>
int main() {
    int number, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number > 0) {
        sum= sum + number % 10; // this will add the last digit of the number to the sum
        number = number / 10; // this will remove the last digit of the number
    }
    printf("The sum of the digits is: %d\n", sum);
    return 0;
}