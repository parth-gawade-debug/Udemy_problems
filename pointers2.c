//using pointers in arrays(basic).
#include <stdio.h>
int main() {
    int numbers[5]={1,2,3,4,5};
    *numbers=2; // this will change the first element of the array to 2
    *(numbers+4)=10; // this will change the last element of the array to 10
    printf("The first element of the array is: %d\n", *numbers); // this will print 2
    printf("The last element of the array is: %d\n", *(numbers+4)); // this will print 10
    return 0;
}