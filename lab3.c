#include <stdio.h>

int main(int argv, char ** argc) {
    int a;
    printf("Enter a value in octal format: ");
    scanf("%o", &a);
    printf("Your number in decimal format is: %d \n", a);

    printf("Your number in octal format is: \n", a);
    printf("Your number in octal format after a bit-shift is: %o: \n", a << 1);

    printf("Your number in octal format is: \n", a);
    printf("Your number in octal format after a bitwise NOT operation is: \n", ~a);

    int b;
    printf("Enter a value in octal format: ");
    scanf("%o", &b);

    printf("Your result after a bitwise OR operation is: %o\n", b | a);

    return 0;
}
