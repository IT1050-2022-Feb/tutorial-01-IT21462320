/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() { //start of main funciton 

  float distance , price ; //declare variables 

  printf("Please enter the distance travelled : ") ; //asks user to input the distance travelled
  scanf("%f" , &distance) ; //read input 

  if (distance <= 30 && distance >= 0){ //checks whether input distance matches given criteria
    price = (float) distance * 50 ; //calculates the price accordingly
  }

  if (distance > 30){ //checks whether the distance matches given criteria
    price = (float) 30 * 50 + (distance - 30) * 40 ; //calculates the price accordingly
  }

  printf("Amount : %.2f" , price) ; //prints the price 
  
  return 0;
} //end of main function  
