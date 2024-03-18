// Requisitos: o programa deve receber um int n e n strings linha a linha, cada string sendo um conjunto de letras (C-cima, B-baixo, E-esquerda, D-direita)
// Começando com 5 vai mudando esta número consoante as letras da primeira string e quando acabarem as letras imprime-se esse número e volta-se a fazer este precesso para 
// as outras strings continuando a usar sempre o mesmo int de referência
// O programa deve fazer scanf de um int n e fazer um ciclo for que vai funcionar n vezes, em cada vez lê uma string e depois noutro ciclo for lê cada letra individualmente
// e modifica o número consuante a letra, ao fim das letras guarda-se o número num array
// no final faz-se um ciclo for para imprimir os valores int do array 


#include<stdio.h>
#include<string.h>

int main () {

    int linhas, n=5, size=0;
    char com[20];

    if(scanf ("%d",&linhas)!=1){
        return -1;
    }

    int l[linhas];

    for (int i=0; i<linhas;i++){
        if(scanf("%s",com)!=1) return -1;
        
        size = strlen (com);

        for(int j=0;j<size;j++){
            if(com[j] == 'C' && n<=6) n+=3;
            if(com[j] == 'B' && n>=4) n-=3;
            if(com[j] == 'D' && n != 3 && n != 6 && n != 9) n+=1; // if(com[j] == 'D' && n/3 != 0) n+=1;
            if(com[j] == 'E' && n != 1 && n != 4 && n != 7) n-=1; // if(com[j] == 'E' && n/3 != 1) n-=1;
        }
        l[i] = n;
    }

    for(int k=0;k<linhas;k++) printf ("%d",l[k]);
    putchar('\n');

    return 0;
}

