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
    person1.salary = 50000.0; 
    person1.age = 30; 
    strcpy(person1.name, "Parth");
    // print the values of the members of person1
    printf("Name: %s\n", person1.name); 
    printf("Age: %d\n", person1.age); 
    printf("Salary: %.2f\n", person1.salary); 
    struct Person person2; // create another instance of the Person structure
    // assign values to the members of person2
    person2.salary = 60000.0; 
    person2.age = 35; 
    strcpy(person2.name, "Gawade");
    // print the values of the members of person2
    printf("Name: %s\n", person2.name); 
    printf("Age: %d\n", person2.age); 
    printf("Salary: %.2f\n", person2.salary); 
    return 0;
}