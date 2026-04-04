// in this program we will add two complex numbers using structure
#include <stdio.h>
typedef struct Complex {  //here we have used typedef to create an alias for the structure Complex
    double real;
    double imaginary;
} complex;
int main() {
    complex c1={.real=2.5, .imaginary=3.5}; // initialize the first complex number
    complex c2={.real=1.5, .imaginary=2.5}; // initialize the second complex number
    complex sum; 
    sum.real = c1.real + c2.real; // add the real parts
    sum.imaginary = c1.imaginary + c2.imaginary; // add the imaginary parts
    printf("The sum of the two complex numbers is: %.2f + %.2f i\n", sum.real, sum.imaginary);
    return 0;   
} //by using typedef we can directly use complex instead of struct complex.