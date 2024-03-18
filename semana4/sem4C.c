//Requisitos: o programa deve receber um inteiro n e n linhas com um inteixo x e uma palavra
//Para cada linha tem que ver a posição a partir da qual a palavra tem x caracteres diferentes
// Deve imprimir a posição de cada linha uma a uma, imprime -1 se não houver uma posição a partir da qual haja uma sequencia x de carateres diferentes
// Primeiramente devo receber o numero de linhas(int) com um scanf
// Depois devo fazer um ciclo for que recebe cada linha, com um scanf que recebe um inteiro e uma string
//  

#include<stdio.h>
#include<string.h>

int main () {
    int linhas,comp_seq,comp_palavra,aux=0,acc=0; 
    char palavra[1001];

    if(scanf("%d",&linhas)!=1) return -1;

    int l[linhas];

    for(int i=0;i<linhas;i++){

        if(scanf("%d",&comp_seq)!=1) return -1;

        if(scanf("%s",palavra)!=1) return -1;

        comp_palavra = strlen (palavra);
        acc=0;
        l[i] = -1;
                                                        
        for(int j=0; j<comp_palavra-comp_seq+1;j++){
            aux=0;

            for(int k=j;k<j+comp_seq;k++){
                for(int m=k+1;m<j+comp_seq;m++){
                    if(palavra[k] == palavra[m]){
                        aux +=1;
                        acc+=1; 
                        break;
                    }
                }

                if(aux > 0) break;    
            }
  
            if (aux==0) break; 
        }

        if(aux == 0) l[i] = acc; 
    }

    for(int k=0;k<linhas;k++) printf("%d\n",l[k]);

    return 0;

}