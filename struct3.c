// in this program we will subtract two complex numbers using structure
#include <stdio.h>
typedef struct Complex {  //here we have used typedef to create an alias for the structure Complex.
    double real;
    double imaginary;
} complex;
int main() {
    complex c1={.real=5.5, .imaginary=4.5}; // initialize the first complex number
    complex c2={.real=2.5, .imaginary=1.5}; // initialize the second complex number
    complex difference; 
    difference.real = c1.real - c2.real; // subtract the real parts
    difference.imaginary = c1.imaginary - c2.imaginary; // subtract the imaginary parts
    printf("The difference of the two complex numbers is: %.2f + %.2f i\n", difference.real, difference.imaginary);
    return 0;   
} //by using typedef we can directly use complex instead of struct complex.