// Program to store and display details of multiple students using an array of structures

#include <stdio.h>

struct Student
{
   int roll_no;
   char name[30];
   float marks;
};

int main()
{
   struct Student s[3];
   int i;

   // input
   for(i = 0; i < 3; i++)
   {
      printf("Enter details of students: %d\n", i + 1);

      printf("Roll Number: ");
      scanf("%d", &s[i].roll_no);

      getchar();

      printf("Name: ");
      fgets(s[i].name, sizeof(s[i].name), stdin);

      printf("Marks: ");
      scanf("%f", &s[i].marks);
   }

      // output
      for(i = 0; i < 3; i++)
      {
          printf("Student details: %d\n",  i + 1);
          printf("Roll Number: %d\n", s[i].roll_no);
          printf("Name: %s", s[i].name);
          printf("Marks: %.2f\n", s[i].marks);
      }

      return 0;
}


      