#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *ptr = fopen(argv[1], "r");
    char ch;
    while ((ch = fgetc(ptr)) != EOF) {
        printf("%c", ch);
    }
}
