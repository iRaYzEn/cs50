#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main() {

    int number = get_int("Number: ");

    int something = ceil((double) number / 2);

    printf("%i\n", something);
    return 0;
}
