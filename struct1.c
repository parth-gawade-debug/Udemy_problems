// creating a structure for employee details
#include <stdio.h>
struct Employee {
    char name[50];
    char hire_date[20];
    float salary;
};
int main() {
    struct Employee emp1;
    printf("Enter employee name: ");
    scanf("%s", emp1.name);
    printf("Enter hire date: ");
    scanf("%s", emp1.hire_date);
    printf("Enter salary: ");
    scanf("%f", &emp1.salary);
    printf("\nEmployee Details:\n");
    printf("Name: %s\n", emp1.name);
    printf("Hire Date: %s\n", emp1.hire_date);
    printf("Salary: %.2f\n", emp1.salary);
    return 0;
}