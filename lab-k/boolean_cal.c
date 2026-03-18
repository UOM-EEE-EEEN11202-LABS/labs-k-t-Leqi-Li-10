#include <stdbool.h>
int main(void) {

  // Declare variables
  bool x, y, a1, a2, a;

  // Using the variables
  x = 0;
  y = 0;
  a1 = x || y; // or
  a2 = x && y; // and
  a = (NOT(x) OR(y AND z))AND NOT(y);

  return 0;
}