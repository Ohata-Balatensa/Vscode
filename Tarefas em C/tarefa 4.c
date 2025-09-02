#include <stdio.h>
#include <stdlib.h>

int main (){

int vet[11],i,media;
int *p;
*p = vet;


printf("\nEscreva 10 elementos para o vetor:");
scanf("%i",vet);

for(i=0;i<10;i++){

    printf("o %io elemento do vetor : %i", i,*p );
}


    return 0;
}