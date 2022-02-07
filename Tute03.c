/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() { //start of main function 

  int s , n ; //declare variables 

  printf("Enter till which number you need the sum for : ") ; //asks input 
  scanf("%d" , &n) ; //read input 

  s = n * (n + 1) / 2 ; //calculate the sum 

  printf("%d" , s) ; //prints the sum 

  return 0 ;

} //end of main function

