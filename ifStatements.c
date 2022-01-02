#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2) {
    if(num1 > num2) {
        return num1;
    }
    return num2;
}

int main() {
    printf("%d\n", max(5,3902));
    char grade = 'A';
    switch(grade) {
    case 'A' : 
        printf("Forza");
        break;
    case 'B' :
        printf("learn from you mistakes");
        break;

    }
    return 0;
}
