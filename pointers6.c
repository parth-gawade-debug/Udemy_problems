//create a program to find the multiplication of 2 numbers using function and pointers
#include <stdio.h>
int* multiply(int *a, int *b, int *result) {
    *result = (*a) * (*b); // multiply the values pointed to by a and b, and store the result in the location pointed to by result
    return result; //   return the result of multiplication
}
int main() {
    int num1 = 5, num2 = 4, product;
    int *result = multiply(&num1, &num2, &product); // pass the addresses of num1, num2, and product to the multiply function
    printf("The product of %d and %d is: %d\n", num1, num2, *result); // print the result of multiplication
    return 0;
}