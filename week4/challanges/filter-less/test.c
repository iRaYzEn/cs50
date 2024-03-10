#include <math.h>
#include <math.h>
#include <stdio.h>

void swap(int *x, int *y);
int main(void)
{
    // int average = round(50 * .393 + 190 * .769 + 90 * .189);

    int x = 1;
    int y = 2;

    printf("%i, %i\n", x, y);
    swap(&x, &y);
    printf("%i, %i\n", x, y);
}

void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
