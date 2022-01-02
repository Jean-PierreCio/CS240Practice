#include <stdio.h>
#include <stdlib.h>

int main() {
    // file modes r = read
    // w = write
    // a = append
    FILE * fpointer = fopen("fileinC.txt", "w");
    fprintf(fpointer, "This is a file made with C");
    //char line[255];
    // FILE * fpoiinter = fopen("fileinC.txt", "r");
    // fgets(line, 255, fpointer);
    // printf("%s", line);

    fclose(fpointer);
    return 0;
}
