/*#include "Zagolovochny file/rhomb.h"
#include <math.h>

double side (diamond* diamond_side) {
    double result;
    result = sqrt((diamond_side->x2 - diamond_side->x1) * (diamond_side->x2 - diamond_side->x1)
                         + (diamond_side->y2 - diamond_side->y1) * (diamond_side->y2 - diamond_side->y1));

    return result;
}

double perimeter(diamond* diamond_per) {
    double result;
    result = 4 * side(diamond_per);

    return result;
}

double area(diamond* diamond_area) {
    double result;
    double diagonal1 = sqrt((diamond_area->x3 - diamond_area->x1) * (diamond_area->x3 - diamond_area->x1)
                            + (diamond_area->y3 - diamond_area->y1) * (diamond_area->y3 - diamond_area->y1));
    double diagonal2 = sqrt((diamond_area->x4 - diamond_area->x2) * (diamond_area->x4 - diamond_area->x2)
                            + (diamond_area->y4 - diamond_area->y2) * (diamond_area->y4 - diamond_area->y2));
    result = diagonal1*diagonal2/2;

    return result;
}
*/