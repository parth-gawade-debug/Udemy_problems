//this program calculates the grade of a student based on the marks obtained in 5 subjects.
#include <stdio.h>
int main() {
    float average,total=0, marks;
    const int SUBJECTS = 5;
    printf("enter the marks obtained in %d subjects:\n", SUBJECTS);
    for (int i = 0; i < SUBJECTS; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks);
        total += marks;
    }
    
    average = total / SUBJECTS;
    printf("Total Marks: %.2f\n", total);
    printf("Average Marks: %.2f\n", average);
    if (average >= 90) {
        printf("Grade: A\n");
    } else if (average >= 80) {
        printf("Grade: B\n");
    } else if (average >= 70) { 
        printf("Grade: C\n");
    } else if (average >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
    return 0;
}