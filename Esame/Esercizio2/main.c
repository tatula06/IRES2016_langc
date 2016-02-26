/*Implementare una funzione, denominata zip, che dato due array di interi a e b della stessa lunghezza crei un terzo
array che contenga i valori dei precedenti array intervallati tra di loro (partendo dal primo elemento dell’array a).
Esempio (in pseudocodice):
a = [1,7,9,4]
b = [4,5,6,9]
Risultato array:
risultato: [1,4,7,5,9,6,4,9]
Testare la funzione creando un array contenente i primi 100 numeri interi pari [0,2,4,6,8,...] e un array contenente
i primi 100 numeri interi dispari [1,3,5,7,9,11,13,...]. Stampare a console l’array risultate dalla chiamata alla
funzione zip.*/

#include <stdio.h>
#include <stdlib.h>

void zip(int* a[],int* b[], int* c[], int n)
{
    int i=0;
    int ic=0;
    for(i=0;i<n;i++){
        c[ic]= a[i];
        ic++;
        c[ic]= b[i];
        ic++;
    }
}

int main()
{
    int n=100;
    int a[n];
    int b[n];
    int c[n*2];
    int i=0;
    int aj=0;
    int bj=1;
    for(i=0;i<n;i++){
        a[i]=aj;
        b[i]=bj;
        aj+=2;
        bj+=2;
    }

    zip(a,b,c,n);
    for(i=0;i<n*2;++i){
         printf("%d ",c[i]);
    }
	printf("\n");
    return 0;
}
