#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#define N 2
#define M 3
int mt[N][M];
int *p=&mt[0][0];

void main(){
for (int i = 0; i < N; i++) {
  for (int j = 0; j < M; j++) {
    *(p + i*M + j) = 1 + rand() % 100;
    printf("%d ", *(p + i*M + j));
  }
  printf("\n");
}

/* for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            *(*(mt+i)+j) = 1 + rand() % 100;
            printf("%d ", *(*(mt+i)+j));
        }
        printf("\n");
    } */
}

