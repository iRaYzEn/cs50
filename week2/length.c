#include <cs50.h>
#include <stdio.h>
#include <string.h>

// int string_lenght(string s);

int main(void) {

    string name = get_string("Name: ");

    // int length = string_lenght(name);
    int length = strlen(name);

    printf("%i\n", length);
}

// int string_lenght(string s) {
//     int n = 0;
//     while (s[n] != '\0') {
//         n++;
//     }
//     return n;
// }
