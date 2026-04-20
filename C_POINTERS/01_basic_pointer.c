//print the value using pointer

#include <stdio.h>

int main()
{ 
    int num;         //normal local variable
    int *p = &num;   //pointer variable stores address of num

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Value of num: %d\n", num);      //prints num value
    printf("Address of num: %p\n", &num); //prints address of num

    printf("Value stored in pointer p (address of num): %p\n", p);
    printf("Address of pointer p: %p\n", &p);          //prints address of p
    printf("Value at address stored in p (*p): %d\n", *p);  //prints value at pointer
  
    return 0;
}