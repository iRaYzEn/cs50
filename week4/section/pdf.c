#include <stdio.h>
#include <cs50.h>
#include "stdint.h"

int main(int argc, string argv[]) {

    if (argc < 2) {
        printf("not possible\n");
        return 1;
    }

    string filename = argv[1];
    FILE *f = fopen(filename, "r");

    uint8_t b[4];
    fread(&b, 1, 4, f);

    for (int i = 0; i < 4; i++) {
        printf("%i\n", b[i]);
    }
    fclose(f);
    return 0;
}
