//C program to print matrix mxn diagonally

#include <stdio.h>

int main()
{
    int rows, cols;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    printf("Enter elements:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Diagonal printing: \n");
    for(int sum = 0; sum <= rows + cols - 2; sum++)
    {
        for(int i = 0; i < rows; i++)
        {
             int j = sum - i;
             if(j >= 0 && j < cols)
             {
                 printf("%d ", arr[i][j]);
             }
        }
        printf("\n");
    }
    return 0;
}