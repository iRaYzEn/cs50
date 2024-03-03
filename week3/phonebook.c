#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct {
  string name;
  string number;
} person;

int main(void) {

  person people[3];

  people[0].name = "Carter";
  people[0].number = "23456234";
  people[1].name = "david";
  people[1].number = "23675746";
  people[2].name = "john";
  people[2].number = "98098992";

  // string names[] = {"charter", "david", "john"};
  // string numbers[] = {"2342348998", "2354562345", "2345626345"};

  string name = get_string("Name: ");
  for (int i = 0; i < 3; i++) {
    if (strcmp(people[i].name, name) == 0) {
      printf("Found %s\n", people[i].number);
      return 0;
    }
  }
  printf("Not found\n");
  return 1;
}
