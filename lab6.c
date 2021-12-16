#include <stdio.h>
#include <malloc.h>

int main(int argv, char ** argc) {
    char *arr[4] = {"W", "O", "R", "K"};
    for (int i = 0; i < 4; i++) {
        printf("%d\t", i);
    }
    printf("\n");
    for (int i = 0; i < 4; i++) {
        printf("%c\t", *arr[i]);
    }
    printf("\n");

    char *arr2;
    arr2 = (char*) malloc (4 * sizeof(char));
    arr2[0] = 'W';
    arr2[1] = 'O';
    arr2[2] = 'R';
    arr2[3] = 'K';
    for (int i = 0; i < 4; i++) {
        printf("%d\t", i);
    }
    printf("\n");
    for (int i = 0; i < 4; i++) {
        printf("%c\t", arr2[i]);
    }
    free(arr2);

    return 0;
}