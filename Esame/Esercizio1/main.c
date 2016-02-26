/*Creare una funzione che accetti in input un array di interi e restituisca la media in double degli elementi contenuti.
Stampare a console la media di un array che contenga i primi 100 numeri interi divisibili per 3.
(ovveri: 3, 6, 9, …).*/

#include <stdio.h>
#include <stdlib.h>

double avg(int a[],int n)
{
    int i=0;
    double somma=0;
    for (i=0;i<n;i++){
        somma+=a[i];
    }
    double media=somma/n;
    return media;
}

int main()
{
    int n=100;
    int a[n];
    int i=0;
    double somma=0;
    int j = 3;
    for (i=0;i<n;i++){
        a[i] = j;
        j+=3;
    }
    double ris=avg(a,n);
    printf("media = %.2f\n",ris);
}
