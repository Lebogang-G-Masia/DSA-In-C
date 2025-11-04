#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "point.h"

float randFloat();

int main(int argc, char* argv[]) {
    float d = atof(argv[2]);
    int i, j, cnt = 0, N = atoi(argv[1]);
    point *a = malloc(N*sizeof(point));
    for (i = 0; i < N; i++) {
        a[i].x = randFloat();
        a[i].y = randFloat();
    }
    for (i = 0; i < N; i++)
        for (j = i+1; j < N; j++)
            if (distance(a[i], a[j]) < d) cnt++;
    printf("%d edges shorter than %f\n", cnt, d);
}

float randFloat() {
    return 1.0*rand() / RAND_MAX;
}
