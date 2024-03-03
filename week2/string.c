#include <string.h>
#include <cs50.h>
#include <stdio.h>

int main(void) {
    string s = get_string("Input: ");
    printf("output: ");

    int length = strlen(s);
    for (int i = 0; i < length; i++) {
        printf("%c", s[i]);
    }
    printf("\n");
}
