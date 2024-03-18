//REquisitos: o programa deve um int n relativo ao número de casos e em cada caso recebe o nome, a altura e o peso
// Depois deve ordenar da seguinte forma:primeiro os mais próximos de 90 kg, se tiverem o mesmo peso o mais alto é primeiro, e se tiverem o mesmo peso e altura fica por ordem alfabética
// Primeiramente vou receber o número de casos com um scanf e fazer um ciclo for para receber cada caso guardando os dados num array de struct
//Depois vou criar 3 funções auxiliares que ordenam (ordem crescente) os pedidos por peso, por altura e por nome
// No final imprime-se os casos já ordenados linha a linha

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct caso {
    char nome[20];
    int peso;
    int altura;
} Cozinheiro;


void ordenapeso (Cozinheiro l[],int size){
    int aux,aux2;
    char aux1[20];
    for (int i = 0; i < size;i++) {
        for (int j = i + 1; j < size; j++){
            if(abs(90 - l[i].peso) > abs(90 - l[j].peso)) {
                aux = l[i].peso;
                l[i].peso = l[j].peso;
                l[j].peso = aux;
                strcpy(aux1,l[i].nome);
                strcpy(l[i].nome,l[j].nome);
                strcpy(l[j].nome,aux1);
                aux2 = l[i].altura;
                l[i].altura = l[j].altura;
                l[j].altura = aux2;
            }
        }
    }
}

void ordenaaltura (Cozinheiro l[],int size){
    int aux,aux2;
    char aux1[20];
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size;j++){
            if((abs(90 - l[i].peso) == abs(90 - l[j].peso)) && l[i].altura < l[j].altura) {
                aux = l[i].peso;
                l[i].peso = l[j].peso;
                l[j].peso = aux;
                strcpy(aux1,l[i].nome);
                strcpy(l[i].nome,l[j].nome);
                strcpy(l[j].nome,aux1);
                aux2 = l[i].altura;
                l[i].altura = l[j].altura;
                l[j].altura = aux2;
            }
        }
    }
}

void ordenanome (Cozinheiro l[],int size){
    int aux,aux2;
    char aux1[20];
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size;j++){
            if((abs(90 - l[i].peso) == abs(90 - l[j].peso)) && l[i].altura == l[j].altura && strcmp(l[i].nome,l[j].nome)>0) {
                aux = l[i].peso;
                l[i].peso = l[j].peso;
                l[j].peso = aux;
                strcpy(aux1,l[i].nome);
                strcpy(l[i].nome,l[j].nome);
                strcpy(l[j].nome,aux1);
                aux2 = l[i].altura;
                l[i].altura = l[j].altura;
                l[j].altura = aux2;
            }
        }
    }
}

int main() {
    
    int linhas;

    if(scanf("%d",&linhas)!=1) return -1;

    Cozinheiro cozinheiros[linhas];

    for(int i=0;i<linhas;i++){
        for(int j=0;j<3;j++){
            if(j==0) {
                if (scanf("%s",cozinheiros[i].nome)!=1) return -1;
            }
            if(j==1) {
                if (scanf("%d",&cozinheiros[i].peso)!=1) return -1;
            }
            if(j==2) {
                if (scanf("%d",&cozinheiros[i].altura)!=1) return -1;
            }
        }
    }

    ordenapeso(cozinheiros,linhas);

    ordenaaltura(cozinheiros,linhas);

    ordenanome(cozinheiros,linhas);



    for(int k=0;k<linhas;k++){
        printf("%s %d %d\n", cozinheiros[k].nome, cozinheiros[k].peso, cozinheiros[k].altura);
    }

    return 0;

    
}