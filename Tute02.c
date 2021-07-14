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

int main() {
  float distance,price,price1,price2;
  printf("Please enter the distance travelled: ");
  scanf("%f",&distance);

  if(distance<30)
  {
    price1 = (distance-30) *40.0;
    price2 = 30*50.0;

    price = price2 + price1;

    printf("Total Cost of transport: %.2f",price);
  }
  else
  {
    price = distance*50.0;
    printf("Total cost of transport: %.2f",price);
  }
  
  return 0;
}
