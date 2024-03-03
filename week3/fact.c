#include <cs50.h>
#include <stdio.h>

int collatz(int n);

int main(void) {

  int number = get_int("Number: ");

  printf("the steps is %d\n", collatz(number));
}

int collatz(int n) {
  // base

  if (n == 1) {
      return 0;
  }

  // recursive case

  if (n % 2 == 0) {
    return 1 + collatz(n / 2);
  } else {
    return 1 + collatz((3 * n) + 1);
  }
}
