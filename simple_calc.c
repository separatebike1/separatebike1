#include <stdio.h>
#include <string.h>

int main(void)
{
    int num1, num2, result;
    char operator[3];

    printf("First number: ");
    scanf("%i", &num1);

    printf("Second number: ");
    scanf("%i", &num2);

    printf("Operation (+, -, *, /): ");
    scanf("%s", operator);

    if (strcmp(operator, "+") == 0)
    {
        result = num1 + num2;
        printf("Result: %i\n", result);
    }
    else if (strcmp(operator, "-") == 0)
    {
        result = num1 - num2;
        printf("Result: %i\n", result);
    }
    else if (strcmp(operator, "*") == 0)
    {
        result = num1 * num2;
        printf("Result: %i\n", result);
    }
    else if (strcmp(operator, "/") == 0)
    {
        if (num2 == 0)
        {
            printf("Error: Cannot divide by 0");
        }
        else
        {
            result = num1 / num2;
            printf("Result: %i\n", result);
        }
        
    }
    else
    {
        printf("Error parsing input.");
    }
}