#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "point.h"

int main() {
    point p0;
    point p1;
    p0.x = 10;
    p0.y = 5;
    p1.x = 3;
    p1.y = 14;

    float d = distance(p0, p1);
    printf("The distance between p0 and p1 is: %2f\n", d);
    return 0;
}
