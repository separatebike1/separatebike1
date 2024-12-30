#include <stdio.h>

int fibonacci(int end);

int main(void)
{
    fibonacci(100);
    printf("Press CTRL+C to exit..\n");
    while (1) {}
}

int fibonacci(int end)
{
    int num1 = 0, num2 = 1, next;
    printf("%i %i ", num1, num2);

    next = num1 + num2;
    while (next < end)
    {
        printf("%i ", next);
        num1 = num2;
        num2 = next;
        next = num1 + num2;
    }
    printf("\n");
    return 0;
}