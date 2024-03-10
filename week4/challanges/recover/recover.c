#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

const int BLOCK = 512;

int main(int argc, char *argv[]) {
    // Accept a single command-line argument
    if (argc != 2) {
        printf("Usage: ./recover FILE\n");
        return 1;
    }
    // Open the memory card
    FILE *f = fopen(argv[1], "r");
    // In the context of reading data from a file, we typically use uint8_t because file data is usually interpreted as unsigned bytes. This is especially true when dealing with binary files, like images, where negative values don't make sense.
    uint8_t buffer[BLOCK];
    // While there's still data left to read from the memory card
    int counter = 0;
    FILE *img = NULL;
    char fileName[8];
    while(fread(&buffer, 1, BLOCK, f) != 0) {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xe0) == 0xe0) {
            sprintf(fileName, "%03i.jpg", counter);
            if (img != NULL) {
                fclose(img);
            }
            img = fopen(fileName, "w");
            fwrite(&buffer, 1, BLOCK, img);
            counter++;
        } else {
            if (img != NULL) {
                fwrite(&buffer, 1, BLOCK, img);
            }
        }
    }
    if (img != NULL) {
        fclose(img);
    }
    fclose(f);
}
