#include <stdio.h>
#include <stdlib.h>
int main() {
    
    char characterName[] = "Bob";
    int characterAge = 37;
    const int BORN = 1988;
    printf("%s is around %d years old\n\n", characterName, characterAge);

    char day[20];
    printf("What day is it today?\n");
    scanf("%s", day);
    printf("Today is %s\n",day);

    int hieght;
    printf("how tall are you: ");
    scanf("%d", &hieght);
    printf("You are %d feet tall\n", hieght);
    
    //Only works if it is by itself
    char firstLast[20];
    printf("Enter your full name:");
    fgets(firstLast, 20, stdin);
    printf("Your name is %s", firstLast);
    
    return 0;
    /*
     *comment baby
     */
    

}
