//C program to find highest frequency of element in array

#include <stdio.h>

int main()
{
    int size, i, j, count;
    
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    int visited[size];

    printf("Enter elements:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }

    int max = 0;
    int max_element;
    int max_count = 0;

    for(i = 0; i < size; i++)
    {
        if(visited[i])
            continue;

        count = 1;

        for(j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        if(count > max)
        {
            max = count;
            max_element = arr[i];
            max_count = 1;   // new maximum found
        }
        else if(count == max)
        {
            max_count++;     // another element has same max
        }
    }
    if(max_count > 1)
    {
        printf("No unique highest frequency element\n");
    }
    else
    {
        printf("Highest frequency element is %d and it occurs %d times\n",
            max_element, max);
    }

    return 0;
}