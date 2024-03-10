#include <stdio.h>

// searching algorithm
// both in the upper bound of the algorithm (the worst case)
// binary search tooks O(log(N))
// linear search tooks O(N)

// both in the lower bound of the algorithm (the best case)
// binary search tooks omega(1) even if it tooks 100000000 its still will be
// omega(1) linear search tooks omega(1) even if it tooks 100000000 its still
// will be omega(1)

typedef struct {
  char *name;
  int votes;
} candiate;

int main(void) {

  candiate president;

  president.name = "Samia";
  president.votes = 10;
}
