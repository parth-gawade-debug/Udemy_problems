// in this program we will reverse the digits of a number
#include <stdio.h>
int main() {
    int number, reverse = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number > 0) {
        reverse=reverse *10 + number % 10; // this will add the last digit of the number to the reverse
        number = number / 10; // this will remove the last digit of the number
    }
    printf("The reverse of the number is: %d\n", reverse);
    return 0;
}