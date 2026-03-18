#include <stdio.h>

int main(void) {
  double height = 0;
  printf("Enter height: ");
  scanf("%lf", &height);

  // Your code in this section
  // Declare variables
  const double PI = 3.1415926;
  const char *email = "leqi.li-3@student.manchester.ac.uk";
  double volume = 0.0;
  const double r = 2.2;

  // Set variables
  // Calculate the volume
  // Check for invalid input
  if (height <= 0) {
    printf("Error\n");
    return 1;
  }
  volume = PI * r * r * height;

  // Do not edit below here
  printf("%s\n", email);
  printf("Volume: %.2f\n", volume);
  return 0;
}