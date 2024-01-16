#include <stdio.h>
#include <stdlib.h>
#include "./include/operation.h"

int main(int argc, char* const argv[])
{
    char op;
    int result;
    float result2;

    printf("Enter the operation the perform(+, -, *, /)\n");
    scanf("%c", &op);

    switch(op)
    {
        case '+':
            result = addition();
            break;
        case '-':
            result = subtraction();
            break;
        case '*':
            result =  multiplication();
            break;
        case '/':
            result2 = division();
            break;
        default:
            printf("\nEnter Valid Operation.\n");
            break;
    }

    if(result2)
        printf("Result = %.2f\n", result2);
    else
        printf("Result = %d\n", result);


    return EXIT_SUCCESS;
}
