//here we will be using enum to represent the days of the week
#include <stdio.h>
enum Day { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };
int main() {
    enum Day today = Wednesday; // initialize the variable today with the value Wednesday
    printf("Today is: %d\n", today); // print the value of today (which will be 3)
    return 0;
}//the integral constants start from 0 then till n-1 where n is no of const.
//sunday will be 0, monday will be 1, tuesday will be 2 and so on.