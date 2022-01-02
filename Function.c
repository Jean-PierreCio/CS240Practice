#include <stdio.h>
#include <stdlib.h>

double cube(double num) {
    double result = num * num * num;
    return result;
}

void sayHi(char name[]) {
    printf("ciao %s", name);
}
int main() {
    printf("Test\n");
    sayHi("Pierre\n");
    printf("The cube of 3 is: %f ", cube(3.0));
    return 0;
}

