#include <stdio.h>
#include <string.h>

int main(int argv, char ** argc) {
    // 1
    char str[100] = {'\0'};
    int nums = 0, lowercase = 0, uppercase = 0;
    scanf("%s", &str);
    for (int i = 0; i < sizeof(str)/sizeof(char) - 1; i++) {
        if (str[i] >= '0' && str[i] <= '9') { nums++; }
        else if (str[i] >= 'a' && str[i] <= 'z') { lowercase++; }
        else if (str[i] >= 'A' && str[i] <= 'Z') { uppercase++; }
    }
    printf("Numbers: %d\nLowercase: %d\nUppercase: %d\n",
           nums, lowercase, uppercase);
    // 5
    float duration, percent, deposit;
    scanf("%f %f %f", &duration, &percent, &deposit);
    for (int i = 0; i < duration; i++) {
        deposit = deposit + deposit * percent / 100 / 12;
        printf("After %d months the sum will be %f\n", i, deposit);
    }

    return 0;
}
