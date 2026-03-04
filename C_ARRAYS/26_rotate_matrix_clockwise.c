//C program to rotate a MxN matrix by 90 degrees in clock wise

#include <stdio.h>

int main()
{
    int rows, cols;

    printf("Enter rows and cols: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int rotated[cols][rows];

    for(int i = 0; i < rows; i++)
    { 
        for(int j = 0; j < cols; j++)
        {
            rotated[j][rows - 1 - i] = arr[i][j];
        }
    }

    // Print rotated matrix
    printf("Matrix after 90 degree clockwise rotation:\n");
    for(int i = 0; i < cols; i++)
    { 
        for(int j = 0; j < rows; j++)
        {
             printf("%d ", rotated[i][j]);
        }
        printf("\n"); 
    }
    return 0;
}
  