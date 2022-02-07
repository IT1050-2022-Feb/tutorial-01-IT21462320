/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() { //start of main function 

  int mark1 , mark2 ; //declare variables
  float avg ; 

  printf("Enter marks of subject 1 : ") ; //asks user to input marks
  scanf("%d" , &mark1) ; //read 

  printf("Enter marks of subject 2 : ") ;
  scanf("%d" , &mark2) ;

  avg = (mark1 + mark2) / 2.0 ; //calculates average

  printf("Average of the two subjects is : %.2f" , avg) ; //prints the average

  return 0 ;

} // end of main function 

