// Program to sort array of structures based on student marks

#include <stdio.h>

struct Student
{
   int roll_no;
   char name[20];
   float marks;
};

int main()
{
    struct Student s[3], temp;

    for(int i = 0; i < 3; i++)
    {
        printf("Enter student details: \n");

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_no);

        getchar();

        printf("Enter Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
     }

     //Sorting based on marks
     for(int i = 0; i < 3 - 1; i++)
     {
         for(int j = 0; j < 3 - i - 1; j++)
         {
              if(s[j].marks > s[j + 1].marks)
              {
                  temp = s[j];
                  s[j] = s[j + 1];
                  s[j + 1] = temp;
              }
         }
      }
      // Output
      printf("\nStudent Details After Sorting:\n");

      for(int i = 0; i < 3; i++)
      {
         printf("\nStudent %d\n", i + 1);
         printf("Roll Number: %d\n", s[i].roll_no);
         printf("Name       : %s", s[i].name);
         printf("Marks      : %.2f\n", s[i].marks);
      }

      return 0;
}