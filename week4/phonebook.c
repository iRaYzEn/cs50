#include <cs50.h>
#include <stdio.h>

int main(void) {
    FILE *file = fopen("phonebook.csv", "a");
    if (file == NULL) {
        return 1;
    }

    char *name = get_string("Enter Name: ");
    char *phone = get_string("Enter Number: ");

    fprintf(file, "%s,%s\n", name, phone);

    fclose(file);
}

