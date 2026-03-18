#include <stdio.h>

int main(void) {
  int n;
  printf("Enter an integer: ");
  scanf("%d", &n);

  // Your code in this section
  char my_email[] = "leqi.li-3@student.manchester.ac.uk";
  int vowel = 0;
  int email_len = 0;

  while (my_email[email_len] != '\0') {
    email_len++;
  }

  if (n < 0 || n >= email_len) {
    printf("Error"); // place as needed in the code. You can use more than once.
  } else {
    char target = my_email[n];
    if (target == 'a' || target == 'e' || target == 'i' || target == 'o' ||
        target == 'u') {
      printf(
          "Yes!"); // place as needed in the code. You can use more than once.
    } else {
      printf("No!"); // place as needed in the code. You can use more than once.
    }
  }

  // Do not edit below here
  return 0;
}