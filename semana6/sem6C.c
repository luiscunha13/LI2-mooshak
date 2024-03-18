//REquisitos: o programa deve um int n relativo ao número de casos e em cada caso recebe o número de pedido, a dificuldade e o preço
// Depois deve ordenar da seguinte forma:rimeiro os mais caros, depois os mais fáceis(A é o mais fácil e E o mais difícil), se for possível, por ordem de pedidos!
// Primeiramente vou receber o número de casos com um scanf e fazer um ciclo for para receber cada caso guardando os dados num array de struct
//Depois vou criar 3 funções auxiliares que ordenam (ordem crescente) os pedidos por preço, por pedido e por dificuldade
// No final imprime-se os casos já ordenados linha a linha

#include<stdio.h>


typedef struct caso {
    int npedido;
    char dificuldade;
    int preco;
} Linha;

void ordenanpedido (Linha l[],int size){
    int aux,aux2;
    char aux1;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++){
            if(l[i].preco == l[j].preco && l[i].dificuldade == l[j].dificuldade && l[i].npedido > l[j].npedido) {
                aux = l[i].preco;
                l[i].preco = l[j].preco;
                l[j].preco = aux;
                aux1 = l[i].dificuldade;
                l[i].dificuldade = l[j].dificuldade;
                l[j].dificuldade = aux1;
                aux2 = l[i].npedido;
                l[i].npedido = l[j].npedido;
                l[j].npedido = aux2;
            }
        }
    }
}

void ordenadificuldade (Linha l[],int size){
    int aux,aux2;
    char aux1;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++){
            if(l[i].preco == l[j].preco && l[i].dificuldade > l[j].dificuldade) {
                aux = l[i].preco;
                l[i].preco = l[j].preco;
                l[j].preco = aux;
                aux1 = l[i].dificuldade;
                l[i].dificuldade = l[j].dificuldade;
                l[j].dificuldade = aux1;
                aux2 = l[i].npedido;
                l[i].npedido = l[j].npedido;
                l[j].npedido = aux2;
            }
        }
    }
}

void ordenapreco (Linha l[],int size){
    int aux,aux2;
    char aux1;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++){
            if(l[i].preco < l[j].preco) {
                aux = l[i].preco;
                l[i].preco = l[j].preco;
                l[j].preco = aux;
                aux1 = l[i].dificuldade;
                l[i].dificuldade = l[j].dificuldade;
                l[j].dificuldade = aux1;
                aux2 = l[i].npedido;
                l[i].npedido = l[j].npedido;
                l[j].npedido = aux2;
            }
        }
    }
}

int main (){

    int x;

    if(scanf("%d",&x)!=1) return -1;

    Linha linhas [x];

    for(int i=0;i<x;i++){
        for(int j=0;j<3;j++){
            if(j==0) {
                if (scanf("%d",&linhas[i].npedido)!=1) return -1;
                getchar();
            }
            if(j==1) {
                if (scanf("%c",&linhas[i].dificuldade)!=1) return -1;
            }
            if(j==2) {
                if (scanf("%d",&linhas[i].preco)!=1) return -1;
            }
        }
      
    }

    ordenapreco(linhas,x);

    ordenadificuldade(linhas,x);

    ordenanpedido(linhas,x);
    


    for(int k=0;k<x;k++){
        printf("%d %c %d\n", linhas[k].npedido,linhas[k].dificuldade, linhas[k].preco);
    }

    return 0;

}