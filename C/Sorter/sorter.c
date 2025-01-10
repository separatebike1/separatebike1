#include <stdio.h>
#define MAX_LEN 10

void sort(int arrayOfInt[]);

int main(void)
{
    int numbers[MAX_LEN];
    for (int i = 0; i < MAX_LEN; i++)
    {
        printf("Number: ");
        scanf("%d", &numbers[i]);
    }
    
    printf("Overview of unsorted array:\n\t[");
    for (int i = 0; i < MAX_LEN - 1; i++)
    {
        printf("%d, ", numbers[i]);
    }
    printf("%d]\n", numbers[MAX_LEN - 1]);
    
    sort(numbers);
    
    printf("Overview of the sorted version of unsorted array:\n\t[");
    for (int i = 0; i < MAX_LEN - 1; i++)
    {
        printf("%d, ", numbers[i]);
    }
    printf("%d]\n", numbers[MAX_LEN - 1]);
}

void sort(int arrayOfInt[])
{
    for (int i = 0; i < MAX_LEN - 1; i++)
    {
        for (int j = i + 1; j < MAX_LEN; j++)
        {
            if (arrayOfInt[i] > arrayOfInt[j])
            {
                int temp = arrayOfInt[i];
                arrayOfInt[i] = arrayOfInt[j];
                arrayOfInt[j] = temp;
            }
        }
    }
}
