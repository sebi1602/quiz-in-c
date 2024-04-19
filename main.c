#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, points = 0;
    
    do {
        system("clear");
        printf("\nWhat is the correct syntax to print 'Hello World' in C?\n");
        printf("1. printf(\"Hello World\");\n");
        printf("2. cout << \"Hello World\";\n");
        printf("3. Console.WriteLine(\"Hello World\");\n");
        printf("4. print(\"Hello World\"); \nYour answer: ");
        scanf("%d", &x);
        if (x != 1) {
            printf("Wrong! The correct answer is 1.\n");
        } else {
            printf("Correct!\n");
            points++;
        }
    } while(x < 1 || x > 4);

    do {
        system("clear");
        printf("\nHow do you create an integer variable with the numeric value 5 in C?\n");
        printf("1. int x = 5;\n");
        printf("2. num x = 5;\n");
        printf("3. x = 5;\n");
        printf("4. double x = 5; \nYour answer: ");
        scanf("%d", &x);
        if (x != 1) {
            printf("Wrong! The correct answer is 1.\n");
        } else {
            printf("Correct!\n");
            points++;
        }
    } while(x < 1 || x > 4);

    do {
        system("clear");
        printf("\nWhich operator is used to compare two values in C?\n");
        printf("1. ><\n");
        printf("2. ==\n");
        printf("3. <>\n");
        printf("4. = \nYour answer: ");
        scanf("%d", &x);
        if (x != 2) {
            printf("Wrong! The correct answer is 2.\n");
        } else {
            printf("Correct!\n");
            points++;
        }
    } while(x < 1 || x > 4);

    system("clear");
    printf("\nYour total points: %d/%d\n", points, 3);
    printf("\n\nGoodbye!!!\n");

    return 0;
}
