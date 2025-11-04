#include <stdio.h>
#include <stdlib.h>
#define N 100

int main(void) {
    int i, j, a[N];
    // the idea is that if i is prime, then a[i] = 1
    // else a[i] = 0
    // we initially set a[i] = 1 because we assume that there are no known nonprime numbers
    for (i = 2; i < N; i++) a[i] = 1;
    for (i = 2; i < N; i++)
        // check if the i is prime
        if (a[i])
            // iterate using j from i, and change every multiple of i to 0.
            // that is, a[i*j] = 0. this is to indicate that it is not a prime since it has has two divisors (i.e. i and j)
            for (j = i; i*j < N; j++) a[i*j] = 0;
    // print out the elements
    for (i = 2; i < N; i++)
        // check if the current number is prime
        if (a[i]) printf("%d ", i);
    printf("\n");
}
