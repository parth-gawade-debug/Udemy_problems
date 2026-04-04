//this program is to calculate the square of a number using pointers.
#include <stdio.h>
int num;
void square(int *num) {
    *num = (*num) * (*num); // calculate the square and store it back in the variable
}
int main() {
    int number=21;
    square(&number); // pass the address of the variable to the function
    printf("The square of the number is: %d\n", number); // print the squared value
    return 0;
}