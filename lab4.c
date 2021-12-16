#include <stdio.h>

int main(int argv, char ** argc) {
    int a;
    scanf("%d", &a);
    ((a >= -9) && (a <= 0)) ? printf("The number is in given range.\n")
                            : printf("The number is NOT in given range.\n");

    int b;
    scanf("%x", &b);
    ((b >> 25) & 1) ? printf("Yes\n") : printf("No\n");

    return 0;
}