#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

    char *s = get_string("S: ");
    // char *t = s;
    // strlen(s + 1) to take the lenght of the string that the human writes 
    // the + 1 is just to include the null character
    char *t = malloc(strlen(s) + 1);

    // the n is just to not call the function mult times to ask the same question
    // because the lenght of s will never going to change after the human types it
    // the <= because i want to include the "\0" character
    for (int i = 0, n = strlen(s); i <= n; i++) {
        t[i] = s[i];
    }

    if (strlen(t) > 0) {
        t[0] = toupper(t[0]);
    }

    printf("%s\n", s);
    printf("%s\n", t);

    free(t);
    return 0;
}
