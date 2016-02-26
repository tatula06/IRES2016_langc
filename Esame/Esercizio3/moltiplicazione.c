#include <stdio.h>
#include <stdlib.h>
#include "somma.h"

int moltiplicazione(int a, int b)
{
    int i=0;
    int sum=0;
    for(i=0;i<b;i++){
        sum=somma(sum,a);
    }
    //printf("%d\n",sum);
    //int molt = a*b;

    return sum;
}

