#include <stdio.h>
#include <string.h>

//1:
int NOD (int a, int b) {
    while (a !=0 && b != 0) {
        if (a > b) { a = a % b; }
        else { b = b % a; }
    }
    return (a + b);
}

int NOK (int a, int b, int nod) {
    return ((a * b)/nod);
}

//5:
void deleteHelper(char* str, int k) {
    int i;
    if ((((str[k] == ' ') || (str[k] == '.') || (str[k] == '(') ||
          (str[k] == '"')) && (str[k+1] == ' ')) || (str[k+1] == ' ') && (str[k+2] == 0)) {
        deleteHelper(str, k + 1);
    }
    for (i = k; i < strlen(str)-1; i++) {
        str[i] = str[i + 1];
    }
    str[i] = 0;
}

void deleteSpaces(char* str) {
    for (int i = 0; i < strlen(str); i++) {
        if ((((str[i] == ' ') || (str[i] == '.') || (str[i] == '(') ||
        (str[i] == '"')) && (str[i+1] == ' ')) || (str[i+1] == ' ') && (str[i+2] == 0)) {
            deleteHelper(str, i + 1);
        }
    }
}

int main() {
    // 1
    int a, b;
    scanf("%d %d", &a, &b);
    int nod = NOD(a, b);
    int nok = NOK(a, b, nod);
    printf("NOD: %d\nNOK: %d\n", nod, nok);

    //5
    char str[100];
    gets(str);
    deleteSpaces(str);
    printf("%s", str);

    return 0;
}