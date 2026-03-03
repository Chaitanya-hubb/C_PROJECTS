//C program to print 2D array in spiral form

#include <stdio.h>

int main()
{
    int rows, cols;

    printf("Entyer rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    printf("Array elements: ");
    for(int i = 0; i< rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
             scanf("%d", &arr[i][j]);
        }
    }

    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    while(top <= bottom && left <= right)
   {
        //left to right
        for(int i = left; i <= right; i++)
        {
             printf("%d ", arr[top][i]);
        }
        top++;

        //top to bottom
        for(int i = top; i <= bottom; i++)
        {
             printf("%d ", arr[i][right]);
        }
        right--;

        if(top <= bottom)
        {//right to left
            for(int i = right; i >= left; i--)
            {
                printf("%d ", arr[bottom][i]);
            }
            bottom--;
        }
        if(left <= right)
        {
            //bottom to top
            for(int i = bottom; i >= top; i--)
            {
                printf("%d ", arr[i][left]);
            }
            left++;
        }
   }
   return 0;
}
   


