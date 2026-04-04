// using enum for shoesize
#include <stdio.h>
enum Size { Small,Medium,Large,ExtraLarge };
int main() {
    enum Size shoesize = Large; // initialize the variable shoesize with the value Large
    printf("your shoesize is :%d\n", shoesize);
    return 0;
}//the integral constants start from 0 then till n-1 where n is no of const.
//small will be 0, medium will be 1, large will be 2 and extra large will be 3.
