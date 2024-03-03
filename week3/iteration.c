#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void) {
  int height = get_int("Height: ");
  draw(height);
}

// not recursively
// void draw(int n) {
//   for (int i = 0; i < n; i++) {
//     for (int j = 0; j < i + 1; j++) {
//       printf("#");
//     }
//     printf("\n");
//   }
// }

void draw(int n) {
  if (n <= 0) {
    return;
  }
  // you are telling the machine that the n is for example 4 then you substract 1 each time the the function executed so in the second time its 3 in the third time it's 2 until it's 0
  // which means it will return and break;
  draw(n - 1);
  for (int i = 0; i < n; i++) {
    printf("#");
  }
  printf("\n");
}
