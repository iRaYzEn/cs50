#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[]) {

    // if (argc == 2) {
    //     printf("hello, %s\n", argv[1]);
    // } else {
    //     printf("something is wrong\n");
    // }

    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
}
