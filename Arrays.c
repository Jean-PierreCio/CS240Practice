#include <stdio.h>
#include <stdlib.h>

int main() {
    int luckyNumbers[] = {1,2,4,4,5,55,6};
    printf("%d\n", luckyNumbers[5]);

    int array[20];
    char Phrase[20] = "Array";
    printf("%c\n\n\n\n\n", Phrase[0]);
    int size = sizeof(luckyNumbers) / sizeof(*luckyNumbers);
    for(int i = 0; i < size; i++) {
        printf("%d\n", luckyNumbers[i]);
    }



    int nums[3][2] = {
                    {1, 2},
                    {3, 4},
                    {5, 6}
                    };
   // printf("%d", nums[0][0]);
    int sizeR = sizeof(nums) / sizeof(*nums);
    int sizeC = 2;
    for (int i = 0; i < sizeR; i ++) {
        for(int j = 0; j < sizeC; j++) {
            if(i == sizeR-1 && j == sizeC -1) {
                printf("%d", nums[i][j]);
            }
            else {
                printf("%d, ", nums[i][j]);
    
            }
        }

    }
    return 0;

}
