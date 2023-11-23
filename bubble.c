#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 10

void PrintArray(const int array[ROWS][COLS]);
void SortArray(int array[ROWS][COLS]);

int main(void)
 {
    int arr[ROWS][COLS];

    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLS; j++) 
        {
            arr[i][j] = rand() % 100 + 1;
        }
    }

    // Print the original array
    printf("Array Before Sorting:\n");
    PrintArray(arr);

    // Sort each row of the array
    SortArray(arr);

    // Print the sorted array
    printf("\nArray After Sorting:\n");
    PrintArray(arr);

    return 0;
}


void PrintArray(const int arr[ROWS][COLS]) 
{
    for (int i = 0; i < ROWS; i++) 
    {
        printf("ROW %d - ", i);

        for (int j = 0; j < COLS; j++) 
        {
            printf("%d, ", arr[i][j]);

        }

        puts("");
    }
}


void SortArray(int arr[ROWS][COLS]) 
{
    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLS - 1; j++) 
        {
            for (int k = 0; k < COLS - j - 1; k++) 
            {
                if (arr[i][k] > arr[i][k + 1]) 
                {
                    int temp = arr[i][k];
                    arr[i][k] = arr[i][k + 1];
                    arr[i][k + 1] = temp;
                }
            }
        }
    }
}
