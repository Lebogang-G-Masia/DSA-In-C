#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    long int i, j, N = atoi(argv[1]);
    int *a = malloc(N*sizeof(int));
    if (a == NULL) printf("Insufficent memory...\n");

    for (i = 2; i < N; i++) *(a+i) = 1;
    for (i = 2; i < N; i++)
        if (a[i])
            for (j = i; i*j < N; j++) a[i*j] = 0;
    for (i = 2; i < N; i++)
        if (a[i]) printf("%d ", i);
    printf("\n");
}
