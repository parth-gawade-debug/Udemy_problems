// addition of two numbers using pointers
#include <stdio.h>
int* add(int *a, int *b, int *result) {
    *result = *a + *b; 
    return result; // return the result of addition
}
int main() {
    int num1 = 10, num2 = 20, sum;
    int *result = add(&num1, &num2, &sum); // pass the addresses of num1, num2, and sum to the add function
    printf("The sum of %d and %d is: %d\n", num1, num2, *result); // print the result of addition
    return 0;
}