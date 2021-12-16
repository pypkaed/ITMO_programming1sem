#include <stdio.h>

int main(int argv, char ** argc) {
    enum styles {
        classics,
        pop,
        rock,
        rap,
        new_age,
        techno
    };
    printf("%d\n", rock);

    struct square {
        float x1, y1, x2, y2, x3, y3, x4, y4;
        float area;
    } mySquare;
    mySquare.x1 = 0; mySquare.y1 = 0;
    mySquare.x1 = 0; mySquare.y1 = 2;
    mySquare.x1 = 2; mySquare.y1 = 2;
    mySquare.x1 = 2; mySquare.y1 = 0;
    printf("%f\n",
           mySquare.area = ((mySquare.x3 - mySquare.x1) * 2 + (mySquare.y3 - mySquare.y1) * 2) / 2
           );

    union u {
        int request;
        struct status {
            unsigned int ready: 1; // 0-1
            unsigned int lackToner: 1;
            unsigned int brokenDrum: 1;
            unsigned int paperAvailable: 1;
        } Lstatus;
    } lazer;

    printf("Insert the number in hexadecimal number system: ");
    scanf("%x", &lazer.request);
    printf("Status: \nr t d p\n");
    printf("%u %u %u %u\n",
           lazer.Lstatus.ready, lazer.Lstatus.lackToner,
           lazer.Lstatus.brokenDrum, lazer.Lstatus.paperAvailable
           );

    return 0;
}