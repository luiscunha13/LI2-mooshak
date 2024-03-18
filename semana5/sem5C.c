//Requisitos: o programa deve receber um int n que é o numero de linhas e n linhas de strings
//Depois deve imprimir o nome que aparece menos vezes 
//Primeiro deve-se fazer scanf do número de linhas e fazer um ciclo for para cada linha que recebe as strings usando fgets
//Depois substitui-se o '\n' final por '\0' usa-se strtok para separar as palavras quando tem ' ' 
//A seguir adiciona-se o número de ocorrências de um nome a uma lista de int e o nome a uma lista de strings
//Depois corre-se a lista de int e vê-se qual é o menor número e depois imprime-se o nome dessa posição da lista de nomes

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nomes[40][20];
    int contagem[40] = {0};
    int linhas, size = 0;

    if (scanf("%d", &linhas) != 1) return -1;
    getchar(); 


    for (int i = 0; i < linhas; i++) {
        char input[1000];
        if (fgets(input, 1000, stdin) == NULL) return -1; // recebe a linha completa

        input[strcspn(input, "\n")] = '\0'; // retira o \n e coloca lá um \0

        char *palavra = strtok(input, " "); // serve para separar a linha quando aparece um ' '

        while (palavra != NULL) { 

            if(size==0){
                strcpy(nomes[size], palavra);
                contagem[size]+=1;
                size++;
            }
            else{                                         
                for(int j=0;j<size;j++){
                    if(strcmp(nomes[j],palavra)==0){
                        contagem[j]+=1;
                        break;
                    }
                    if(strcmp(nomes[j],palavra)!=0 && j==size-1){
                        strcpy(nomes[size], palavra);
                        contagem[size]+=1;
                        size++;
                    }
                }

            }

            palavra = strtok(NULL, " "); // serve para passar para a próxima palavra
            
        }
    }

    int min = 0; 
    for (int j = 1; j < size; j++) {
        if (contagem[j] < contagem[min]) {
            min = j;
        }
    }

    printf("%s\n", nomes[min]);

    return 0;
}