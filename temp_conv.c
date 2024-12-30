#include <stdio.h>
#include <string.h>

int cToF(int temp);
int fToC(int temp);
int cToK(int temp);
int kToC(int temp);
int fToK(int temp);
int kToF(int temp);

int main(void)
{
    int temp, result;
    char from[3], to[3];
    
    printf("Convert temperatures.\nFrom (f, c, k): ");
    scanf("%s", from);

    printf("To: ");
    scanf("%s", to);

    printf("Temp: ");
    scanf("%i", &temp);

    if (strcmp(from, "f") == 0)
    {
        if (strcmp(to, "c") == 0)
        {
            result = fToC(temp);
            printf("%i", result);
        }
        else if (strcmp(to, "k") == 0)
        {
            result = fToK(temp);
            printf("%i", result);
        }
        else {
            printf("Error: Error parsing input, or cannot convert fahrenheit to itself.");
        }
    }
    else if (strcmp(from, "c") == 0)
    {
        if (strcmp(to, "f") == 0)
        {
            result = cToF(temp);
            printf("%i", result);
        }
        else if (strcmp(to, "k") == 0)
        {
            result = cToK(temp);
            printf("%i", result);
        }
        else {
            printf("Error: Error parsing input, or cannot convert celsius to itself.");
        }
    }
    else if (strcmp(from, "k") == 0)
    {
        if (strcmp(to, "f") == 0)
        {
            result = kToF(temp);
            printf("%i", result);
        }
        else if (strcmp(to, "c") == 0)
        {
            result = kToC(temp);
            printf("%i", result);
        }
        else {
            printf("Error: Error parsing input, or cannot convert kelvin to itself.");
        }
    }
    else
    {
        printf("Program threw an error.");
    }
}

int cToF(int temp)
{
    int fahrenheit = temp * 1.8 + 32;
    return fahrenheit;
}

int fToC(int temp)
{
    int celsius = (temp - 32) * 5 / 9;
    return celsius;
}

int cToK(int temp)
{
    int kelvin = temp + 273.15;
    return kelvin;
}

int kToC(int temp)
{
    int celsius = temp - 273.15;
    return celsius;
}

int fToK(int temp)
{
    int kelvin = (temp - 32) * 5 / 9 + 273.15;
    return kelvin;
}

int kToF(int temp)
{
    int fahrenheit = (temp - 273.15) * 9 / 5 + 32;
    return fahrenheit;
}