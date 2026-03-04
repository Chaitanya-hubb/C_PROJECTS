//C program to rotate a given NxN matrix by 90 degree anti-clock wise

#include <stdio.h>

int main()
{
    int n;

    printf("Enter size of matrix (N): ");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    //step 1: Transpose
    for(int i = 0; i < n; i++)
    { 
        for(int j = i + 1; j < n; j++)
        {
             int temp = arr[i][j];
             arr[i][j] = arr[j][i];
             arr[j][i] = temp;
        }
    }

    //step 2: Reverse each column
    for(int j = 0; j < n; j++)
    { 
        for(int i = 0; i < n/2; i++)
        {
             int temp = arr[i][j];
             arr[i][j] = arr[n - 1 - i][j];
             arr[n - 1 - i][j] = temp;
        }
    }
    // Print rotated matrix
    printf("Matrix after 90 degree anti-clockwise rotation:\n");
    for(int i = 0; i < n; i++)
    { 
        for(int j = 0; j < n; j++)
        {
             printf("%d ", arr[i][j]);
        }
        printf("\n"); 
    }
    return 0;
}
  