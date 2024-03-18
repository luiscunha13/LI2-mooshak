//Requisitos: o programa deve receber um inteiro n que corresponde ao número de linhas 
// deve receber n linhas com uma string cada onde apenas um caractere se repete
//deve devolver uma string com a letra que se repete em cada linha(por ordem)
//Primeiramente deve receber o inteiro n com um scanf e criar um array de char com n posições
//De seguida fazer um ciclo for que recebe uma linha e coloca o resultado da função auxiliar no array de char
//A função auxiliar vai receber a palavra e usando um ciclo que percorre as letras da palavra e outro interior que percorre
// No final devo imprimir o array de char atraves de um ciclo for que dá putchar de cada letra e no final um putchar('\n')

#include<stdio.h>
#include<string.h>

char existe (char l[1001]){
    int x = strlen (l);

    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            if(i==j) continue;
            if(l[i] ==l[j]) return l[i];
        }
    }

    return 0;
}

int main () {
    char palavra[1001];
    int linhas;

    if (scanf("%d",&linhas) != 1) return -1;
    

    char f[linhas];

    for(int i=0;i<linhas;i++){
        if (scanf("%s",palavra) != 1) return -1;
        

        f[i] = existe (palavra);
        
    }

    for(int j=0;j<linhas;j++) putchar(f[j]);
    putchar('\n');

    return 0;
}