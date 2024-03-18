// Requisitos: o programa deve um int n relativo ao número de casos e em cada caso recebe o número de suspeitos e abaixo o nome do vilão seguidamente dos suspeitos
// Para cada caso, o programa deve imprimir a posição dos suspeitos que são anagramas do vilão
// Primeiramente vou receber o número de casos com um scanf e fazer um ciclo for que para cada caso recebe o número de suspeitos com scanf os nomes com fgets usando também um ciclo for
// e substituindo o ultimo caracter '\n' por '\0'
// Depois faz-se um ciclo for que para cada candidato ém feito outro ciclo for em que se uma letra do candidato aparece tantas vezes no nome do candidato como 
//no nome do vilão e ao fazer-se isso para todas as letras e ignorando os ' ' consegue-se saber se é um anagrama
//caso seja um anagrama guarda-se o numero do suspeito nuam lista, no caso de não haver nenhum anagrama guarda-se -1 na lista
// No final, para cada caso, imprime-se os numeros dos suspeitos que são anagramas do vilão
#include<stdio.h>
#include<string.h>

int existeigual (char c, char s[]){
    int x = strlen(s), acc=0;

    for(int i=0;i<x;i++){
        if(s[i] == c) acc++;
    }

    return acc;

}

int main () {

    int casos;

    if(scanf("%d",&casos)!=1) return -1;

    int res [casos][50];
    int conta[casos];

    for(int i=0;i<casos;i++){
        int linhas;
        if(scanf("%d",&linhas)!=1) return -1;
        getchar();

        char nomes[linhas+1][100];
        conta[i]=0;

        for(int j=0;j<linhas+1;j++){
            if (fgets(nomes[j], 100, stdin) == NULL) return -1;

            nomes[j][strcspn(nomes[j], "\n")] = '\0'; 

        }

        for(int l=1;l<linhas+1;l++){
            int eigual=1;
            
            for(int m=0;m<(int)strlen(nomes[l]);m++){
                if(nomes[l][m] == ' ') continue;
                if(existeigual(nomes[l][m], nomes[l]) != existeigual(nomes[l][m], nomes[0])){
                    eigual=0;
                    break;
                }
            }

            if(eigual==1){
                res[i][conta[i]] = l;
                conta[i]++;
            }

            if(l==linhas && eigual==0 && conta[i] == 0){
                res[i][conta[i]] = -1;
                conta[i]++;
            }
        }
        

    }

    for(int j=0;j<casos;j++){
        for(int k=0;k<conta[j];k++){
            if(k==conta[j]-1) printf("%d",res[j][k]);
            else printf("%d ",res[j][k]);
        }
        putchar('\n');
    }

    
    return 0;
}