#include <stdio.h>

int main()
{
    /*Declaring all variables needed*/
    char operator;
    double num1, num2, result;
    // Asking user to enter first number
    printf("Enter first number: ");
    scanf("%lf", &num1); /*Format specifier for a double is %lf*/
    // Asking user to enter second number
    printf("Enter second number: ");
    scanf("%lf", &num2);
    // Asking user to enter operator
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator); /*Accepting a character the format specifier is %c*/
    // Performing the operation based on the operator entered
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("\nresult:%.2lf", result); /*.2 allows display of 2 decimal places*/
        break;
    case '-':
        result = num1 - num2;
        printf("\nresult:%.2lf", result);
        break;
    case '*':
        result = num1 * num2;
        printf("\nresult:%.2lf", result);
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("\nresult:%lf", result);
        }
        else
        {
            printf("Error! Division by zero.\n");
        }
        break;
    default:
        printf("Error! Invalid operator.\n");
        break;
    }

    return 0;
}