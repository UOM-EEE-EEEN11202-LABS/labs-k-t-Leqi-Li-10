#include <stdbool.h>
int main(void) {

  // Declare variables
  bool x, y, a1, a2, a, z;

  // Using the variables
  x = 0;
  y = 0;
  a1 = x || y; // or
  a2 = x && y; // and
  a = (!(x) || (y && z)) && !y;

  return 0;
}