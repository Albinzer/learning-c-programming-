#include <stdio.h>

// updated structure with a fixed size for the name field
struct student {
    int roll;
    char name[20]; // assuming 20 characters is the maximum length for a name
};

int main(void) {

    // Creating instances of the student structure
    struct student student1, student2, student3;

    // Assigning values to student1
    student1.roll = 220601;
    sprintf(student1.name, "Labib"); // Assigning the name using sprintf

    // Assigning values to student2
    student2.roll = 220602;
    sprintf(student2.name, "Monjur");

    // Assigning values to student3
    student3.roll = 220635;
    sprintf(student3.name, "rafi");

    // Printing student information
    printf("student1.roll=%d\n", student1.roll);
    printf("student1.name=%s\n", student1.name);

    printf("student2.roll=%d\n", student2.roll);
    printf("student2.name=%s\n", student2.name);

    printf("student3.roll=%d\n", student3.roll);
    printf("student3.name=%s\n", student3.name);

    return 0;
}



////////////
