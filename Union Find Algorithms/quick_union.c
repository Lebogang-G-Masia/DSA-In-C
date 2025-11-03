#include <stdlib.h>
#include <stdio.h>
#define SIZE 10


int main() {
    int i, j, p, q, id[SIZE];

    for (i = 0; i < SIZE; i++) id[i] = i;

    while (scanf("%d %d", &p, &q)) {
    	for (i = p; i != id[i]; i = id[i]);
	for (j = q; j != id[j]; j = id[j]);
	if (i == j) continue;
	id[i] = j;
	printf(" %d %d\n", p, q);
    }
}
