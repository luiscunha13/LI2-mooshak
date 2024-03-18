//Requisitos: receber um inteiro n e receber n strings que se referem a possíveis resultados de um jogo de pedra papel tesoura
// Usar 3 variáreis inteiras para contar as vitórias do jogador1, os empates e as vitórias do jogador2
// Devolver esses 3 ints pela ordem referida anteriormente
//Fazer um scanf para receber o int n 
// Receber n char um a um e saber se é uma vitória para jogador 1 empate ou vitória para o jogador2 e consoante isso adicionar 1 à variável corresponte
//Fazer um printf para escrever as 3 variáveis

#include<stdio.h>
#include<string.h>

int main () {
    int x, n, inz, cmd, emp;
    char y[2];

    inz = cmd = emp = 0;

    if (scanf("%d",&n) != 1) return -1;

    for (int i=0; i<n; i++){
        if ((scanf("%s",y) == 1)){
            if (strcmp(y,"@*") == 0) emp += 1;
    
            if (strcmp(y,"@-") == 0) cmd += 1;
            
            if (strcmp(y,"@+") == 0) inz += 1;
            
            if (strcmp(y,"|*") == 0) inz += 1;
            
            if (strcmp(y,"|-") == 0) emp += 1;
            
            if (strcmp(y,"|+")==0) cmd += 1;
            
            if (strcmp(y,"X*")==0) cmd += 1;
    
            if (strcmp(y,"X-")==0) inz += 1;
            
            if (strcmp(y,"X+")==0) emp += 1;
            
        }
        else{
            return -1;
        }
    }

    printf ("%d %d %d\n", inz, cmd, emp);

    return 0;

}