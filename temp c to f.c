#include <stdio.h>
int main() {
  float celsius, fahrenheit;
  printf("Enter temp in Celsius: ");
  scanf("%f", &celsius);
  fahrenheit = (celsius * 9/5) + 32;
   printf("The temp in Fahrenheit is: %f", fahrenheit);
   return 0;
}