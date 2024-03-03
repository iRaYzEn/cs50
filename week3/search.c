#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  // int numbers[] = {20, 500, 10, 5, 100, 1, 50};
  //
  // int n = get_int("Number: ");
  //
  // for (int i = 0; i < 7; i++) {
  //   if (numbers[i] == n) {
  //     printf("found\n");
  //     return 0;
  //   }
  // }
  // printf("not found\n");
  // return 1;

    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};
    string s = get_string("string: ");
    for (int i = 0; i < 6; i++) {
        // if (strings[i] ==  s) {
        if (strcmp(strings[i], s) == 0) {
            printf("found\n");
            return 0;
        }
    }
    printf("not found\n");
    return 1;

}
