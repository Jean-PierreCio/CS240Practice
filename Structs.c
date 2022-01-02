#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    char major[50];
    int age;
    double gpa;
};



int main() {
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Jim"); 
    strcpy(student1.major, "CS");
    
    struct Student student2;
    student2.age = 26;
    student2.gpa = 4.0;
    strcpy(student2.name, "Jean-Pierre"); 
    strcpy(student2.major, "CS");
    
    printf("gpa:%f name:%s", student1.gpa, student1.name);
    return 0;
}
