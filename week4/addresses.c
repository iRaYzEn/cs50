#include <stdio.h>

int main(void) {
    // int n = 50;
    // int *p = &n;
    // printf("%i\n", *p);

    // char *s = "HI!";
    // printf("%s\n", s);
   
    char *s = "HI!";
    printf("%c", *s);
    printf("%c", *(s + 1));
    printf("%c\n", *(s + 2));
}
