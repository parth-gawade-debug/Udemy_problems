//create a program to find the largest element in an array using pointers.
#include <stdio.h>
int main() {
    int arr[]={34,12,21,54,48};
    int largest=*arr; // initialize largest to the first element of the array
    for (int i = 1; i < 5; i++) { // start from the second element
        if (*(arr+i) > largest) { // compare the current element with largest
            largest = *(arr+i); // update largest if current element is greater
        }
    }
    printf("The largest element in the array is: %d\n", largest); 
    return 0;
}