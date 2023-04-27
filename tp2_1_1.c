#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    // codigo a completar
    #define N 20
    srand(time(NULL));
    int i;
    double vt[N];
    for(i = 0;i<N; i++)
    {
        vt[i]=1+rand()%100;
        printf("\n[%d]%f", i,vt[i]);
    }
    
}