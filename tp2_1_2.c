#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

void main() {
    double vt[N];
    double *p ;
    p = vt;
    srand(time(NULL));
    
    for(int i = 0; i < N; i++) {
        *(p+i) = 1 + rand() % 100;
        printf("\n%f ", *(p+i));
    }
    
} 