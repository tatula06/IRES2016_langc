/*Creare una struttura Studente caratterizzata da un nome, cognome e dal numero di esami sostenuti. Implementare le
funzioni setCognome, getCognome, setNumeroEsami e getNumeroEsami che ne impostano e restituiscano rispettivamente
il cognome e il numero di esami dello studente. Nota: non porrere limiti alla lunghezza del cognome.
Creare un array di 100000 Studenti così denominati:

Studente 1:
Cognome: “Cognome_1”
Voto: 1

Studente 2:
Cognome: “Cognome_2”
Voto: 2
…
Studente i:
Cognome: “Cognome_i”
Voto: i%10
..
Studente 1000:
Cognome: “Cognome_1000”
Voto: 0
Il voto è il numero dello studente modulo 10 (studente i-esimo ha voto i%10).

PS. la funzione sprintf(char* buf, “%d”, i) permette di trasformare un intero in una stringa (buf contiene la
stringa rappresentante l’intero i.
Calcolare la somma dei voti degli studenti.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char* cognome;
	char* voto;
} Studente;

void Studente_setCognome(Studente* this, char* cognome)
{
	int length = strlen(cognome);
	this->cognome = malloc(length + 1);
	strcpy(this->cognome, cognome);
}
void Studente_setVoto(Studente* this, char* voto)
{
	int length = strlen(voto);
	this->voto = malloc(length + 1);
	strcpy(this->voto, voto);
}

void Studente_getCognome(Studente* this, char* cognome)
{
	strcpy(cognome, this->cognome);
}

void Studente_getVoto(Studente* this, char* voto)
{
	strcpy(voto, this->voto);
}


int main()
{
    int id=100000;
    Studente* lista = malloc(id * sizeof(Studente));

    char str1[20];
	char str2[20];
	int i=0;
    for (i=0;i<id;i++){
        sprintf(str1, "%d", i+1);
		strcpy(str2, "Studente ");
		strcat(str2, str1);
		strcat(str2,"\n");
		strcat(str2, "Voto");
		Studente_setCognome(&lista[i], str2);
		Studente_setVoto(&lista[i], str1);
    }
    //questo non era richiesto ma serviva a me per capire come stampava
    //non riesco a ciclare con modulo10
    /*for (i=0;i<id;i++){
		Studente_getCognome(&lista[i], str1);
		Studente_getVoto(&lista[i], str2);
		printf("%s  %s\n", str1, str2);
	}*/
	
	
	//ho cercato di fare la somma, ma ovviamente con scarsi risultati
	int somma=0;
	somma+=(str1);
	printf("%d",somma);
    return 0;
}
