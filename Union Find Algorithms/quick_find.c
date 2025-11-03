#include <stdlib.h>
#include <stdio.h>
#define SIZE 10 // Size of the array


int main() {
	int i, t, p, q, id[SIZE];
	for (int i = 0; i < SIZE; i++) id[i] = i;
	while (scanf("%d %d", &p, &q) == 2) {
	    if (id[p] == id[q]) continue;
	    for (t = id[p], i = 0; i < SIZE; i++) {
		if (id[i] == t) id[i] = id[q];
	    }
	    printf("\t%d %d\n", p, q);
	}

	for (i = 0; i < SIZE; i++) printf("%d ", id[i]);
	printf("\n");
	return 0;
}
