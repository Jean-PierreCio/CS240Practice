#include <stdio.h>
#include <stdlib.h>

int main() {
    int age = 22;
    int * pAge = &age;
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;

    printf("Age: %p\nGrade: %p\n\n", &age, &grade);

    //Dereferencing
    printf("%p\n", pAge);
    printf("%d", *pAge);
    return 0;
}
