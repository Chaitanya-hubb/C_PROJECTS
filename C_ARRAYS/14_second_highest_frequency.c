//C program to find second highest occurence in array

#include <stdio.h>

int main()
{
   int size, i, j, count;
   
   printf("Enter size: ");
   scanf("%d", &size);

   int arr[size];
   int visited[size];

  printf("Enter elements: ");
  for(i = 0; i < size; i++)
  {  
     scanf("%d", &arr[i]);
     visited[i] = 0;
  }
  
  int max = 0, second_max = 0;
  int max_element = 0, second_element = 0;
  int second_count = 0;
   
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
         second_max = max;
         second_element = max_element;
         second_count = 1;
 
         max = count;
         max_element = arr[i];
     }
     else if(count > second_max && count < max)
     {
         second_max = count;
         second_element = arr[i];
         second_count = 1;
     }
     else if(count == second_max)
     {
        second_count++;
     }
  }
  if(second_max == 0 || second_count > 1)
  {
     printf("No unique second highest frequency element\n");
  }
  else
  {
     printf("Second highest frequency element is %d and it occurs %d times\n",
               second_element, second_max);
  }
  return 0;
}




         