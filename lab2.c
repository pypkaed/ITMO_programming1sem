#include <stdio.h>
#include <math.h>

int main(int argv, char ** argc) {
    float z1, z2, alpha;
    scanf("%f", &alpha);

    z1 = 1 - 0.25 * sinf(2 * alpha) * sinf(2 * alpha)
            + cosf(2 * alpha);
    z2 = cosf(alpha) * cosf(alpha) + cosf(alpha) * cosf(alpha)
            * cosf(alpha) * cosf(alpha);
    printf("%f\n%f", z1, z2);

    return 0;
}