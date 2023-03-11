/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void) {
   int mark1, mark2;
   float avg;
   printf("Enter the 1st mark:");
   scanf("%d\n", &mark1);
   
   printf("Enter the second mark:");
   scanf("%d\n", &mark2);
   
   avg = (mark1 + mark2)/ 2.0;
   printf("%.2f", avg);
   
  
  return 0;
}

