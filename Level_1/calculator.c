#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculator() {
    char *options[] = {
        "Addition",
        "Subtraction",
        "Multiplcation",
        "Division",
        "Exit",
    };

    char *select;

    for(int i = 0; i < 5; i++) {
        printf("%d. %s \n", i+1, options[i]);
    }
    
    printf("Choose an operation: ");
    scanf("%s", select);
    
    int selectInt = atoi(select);

    if(selectInt == 5) {
        return 0;
    }

    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d ", &num1);
    scanf("%d", &num2);

    float result; 

    switch (selectInt)
    {
    case 1:
        result = num1 + num2;
        break;
    case 2:
        result = num1 - num2;
        break;
    case 3:
        result = num1 * num2;
        break;
    case 4:    
        result = (float) num1 / num2;
        break;
    default:
        break;
    }

    printf("Result: %f\n", result);

    char *test;
    char *yes;
    printf("Do you want to perfom another operation (y/n): \n");

    return 0;
}

int main(void) {
    printf("\n******************************\n");
    printf("Welcome to Simple Calculator!\n");


    calculator();
    printf("\n******************************\n");
    
    return 0;
}