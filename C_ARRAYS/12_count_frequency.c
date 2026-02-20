//C program to count the frequency of elements in array

#include <stdio.h>

int main()
{
    int size, i, j, count;
    
    printf("Enter size of an array: ");
    scanf("%d", &size);

   int arr[size];
   int visited[size];    //to mark counted elements

   printf("Enter elements of an array: ");
   for(i = 0; i < size; i++)
   {
       scanf("%d", &arr[i]);
       visited[i] = 0;
   }

   for(i = 0; i < size; i++)
   {
      if(visited[i] == 1)
         continue;

      count = 1;
      for(j = i + 1; j < size; j++)
      {
          if(arr[i] == arr[j])
          {
              count++;
              visited[j] = 1;   // mark as counted
          }
      }
      printf("%d occurs %d times\n", arr[i], count);
   }
   return 0;
}

   