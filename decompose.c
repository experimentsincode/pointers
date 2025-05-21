#include <stdio.h>

void decompose(double x, long *int_part, double *frac_part)
{
    *int_part = (long) x;
    *frac_part = x - *int_part;
}

int main() {
    double number = 123.456;
    long int_part;
    double frac_part;

    decompose(number, &int_part, &frac_part);

    printf("Integer part: %ld\n", int_part);
    printf("Fractional part: %lf\n", frac_part);

    return 0;
}
