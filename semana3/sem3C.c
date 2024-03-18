//Requisitos: o programa deve ler um int n e fazer um ciclo for que funcona n vezes, em cada volta deve ler um int x e ler x int 
// com esses int deve fazer um ciclo for deve guardar os valores num array se eles foram maiores que o anterior e ir registando a length que é guardada depois noutro array
// no final deve imprimir todos as lengths guardadas no array

// Primeiramente deve fazer scanf do um int n e criar um array de n elementos. Depois faz-se um clclo for de n interações em que dentro desse ciclo faz-se scanf de 
// um int x e e scanf de outros int que são guardados num array. Depois faz-se um ciclo for que guarda os valores do array noutro array se esses forem maiores que o anteriores
// e aumenta um int auxiliar por cada int adicionado ao array
//
#include<stdio.h>
#include<string.h>

int main () {

    int numeros, linhas, aux;
        
    if (scanf("%d",&linhas) != 1) return -1;

    int resposta[linhas];

    for (int i=0;i<linhas;i++){
        if(scanf ("%d",&numeros) !=1) return -1;
        
        int lista[numeros], crescente[numeros];

        for(int j=0;j<numeros;j++){
           if(scanf("%d",&lista[j])!=1) return -1;
           
        } 

        aux = 0;

        for(int k=0;k<numeros;k++){
            if (k==0 || lista[k]>crescente[aux-1]){
                crescente[aux] = lista[k];
                aux++;    
            }  
        }

        resposta[i] = aux;

    }

    for(int j=0;j<linhas;j++) printf("%d\n",resposta[j]);

    return 0;
}



