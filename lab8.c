#include <stdio.h>
#include <string.h>

int main(int argv, char ** argc) {
    char s1[10] = "test";
    char s2[10] = "TEST";
    printf("st1: %s; st2: %s\n", s1, s2);
    int n;
    // 2: Сложение первой строки и n начальных символов 2й строки.
    scanf("%d", &n);
    strncat(s1, s2, n);
    printf("%s\n", s1);
    // 5: Копирование одной строки в другую строку
    char s3[10];
    strcpy(s3, s2);
    printf("%s\n", s3);
    // 8: Поиск в строке первого вхождения указанного символа
    char *s4 = s1;
    int find = strchr(s4, 'e');
    if (find == NULL) { printf("Error\n"); }
    else { printf("Position: %d\n", find - s4 + 1); }
    // 11: Определить длину отрезка одной строки, содержащего
    // символы из множества символов, входящих во вторую строку
    printf("%d\n", strspn(s1, 'esE'));
    // 12: Определить длину отрезка одной строки, не содержащего
    // символы второй строки
    printf("%d\n", strcspn(s1, s2));

    return 0;
}
