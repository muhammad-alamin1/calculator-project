#include <stdio.h>
#include <stdlib.h>
#include "../include/operation.h"

// sum
int addition()
{
    int num1, num2, answer;

    printf("Enter first number: \n");
    scanf("%d", &num1);

    printf("Enter second number: \n");
    scanf("%d", &num2);

    answer = num1 + num2;

    return answer;
}

// subtraction
int subtraction()
{
    int num1, num2, answer;

    printf("Enter first number: \n");
    scanf("%d", &num1);

    printf("Enter second number: \n");
    scanf("%d", &num2);

    answer = num1 - num2;

    return answer;
}

// multiplication
int multiplication()
{
    int num1, num2, answer;

    printf("Enter first number: \n");
    scanf("%d", &num1);

    printf("Enter second number: \n");
    scanf("%d", &num2);

    answer = num1 * num2;

    return answer;
}

// division
float division()
{
    int num1, num2;
    float answer;

    printf("Enter first number: \n");
    scanf("%d", &num1);

    printf("Enter second number: \n");
    scanf("%d", &num2);

    if(num2 == 0)
    {
        printf("\n Divisor cannot be zero. Please enter another valid value.!");
        return 0;
    }

    answer = (float)num1 / num2;

    return answer;
}
