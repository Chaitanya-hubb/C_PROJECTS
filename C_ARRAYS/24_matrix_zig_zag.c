//C program to print the matrix(MXN) in zig-zag format
//Direction changes based on even/odd diagonal number

#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    printf("Enter array elements:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
  
    for(int sum = 0; sum <= rows + cols - 2; sum++)
    {
        if(sum % 2 == 0)  // even diagonal → bottom to top
        {
            for(int i = rows - 1; i >= 0; i--)
            {
                 int j = sum - i;
                 if(j >= 0 && j < cols)
                 {
                      printf("%d ", arr[i][j]);
                 }
            }
        }
        else   // odd diagonal → top to bottom
        {      
            for(int i = 0; i < rows; i++)
            {
                 int j = sum - i;
                 if(j >= 0 && j < cols)
                    printf("%d ", arr[i][j]);
            }
       }
    }
    printf("\n");
    return 0;
}