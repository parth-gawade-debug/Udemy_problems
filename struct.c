//this program creates a basic structure to store some members
#include <stdio.h>
#include <string.h> // include string.h for strcpy function
struct Person {
    double salary; // member to store salary
    int age; // member to store age
    char name[50]; // member to store name
};
int main() {
    struct Person person1; // create an instance of the Person structure
    // assign values to the members of person1
    person1.salary = 50000.0; // assign salary
    person1.age = 30; // assign age
    strcpy(person1.name, "John Doe");
    // print the values of the members of person1
    printf("Name: %s\n", person1.name); // print name
    printf("Age: %d\n", person1.age); // print age
    printf("Salary: %.2f\n", person1.salary); // print salary
    struct Person person2; // create another instance of the Person structure
    // assign values to the members of person2
    person2.salary = 60000.0; // assign salary
    person2.age = 35; // assign age
    strcpy(person2.name, "Jane Smith");
    // print the values of the members of person2
    printf("Name: %s\n", person2.name); // print name
    printf("Age: %d\n", person2.age); // print age
    printf("Salary: %.2f\n", person2.salary); // print salary
    return 0;
}