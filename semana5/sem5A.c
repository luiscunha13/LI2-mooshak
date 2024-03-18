//Requisitos: o programa deve receber um int n que é o número de casos e para cada caso deve receber o número de guichés, o guiché inicial e a sequência de guichés seuintes ou 0
//Começando no guiché inicial(n) passa-se para o n-ésimo guiché da sequência e assim sucessivamente. Se se voltar a um guiché já visitado ocorre um ciclo infernal
//Se ocorre um 0 acaba a função
// A função deve depois imprimir a sequência de visitas para cada caso e se ocorre ciclo infernal em algum caso, primeiro imprime-se as casa visitadas e depois "CICLO INFERNAL"

//Primeiramente o programa deve fazers scanf a um int n que é o número de casos e depois é feito um ciclo for que para cada caso recebe o nº de guichés, o guiché inicial 
// e a sequência de guichés sendo guardados em diferentes listas
// Depois faz-se outro ciclo for e para caso cria-se uma lista para guardar a sequência de guichés visitados, guardando na primeira posição o guiché inicial
// Também se cria uma variável auxiliar que para registar a ocorrência de ciclo infernal
// Para a sequência de guichés desse caso se o guiché for 0 faz-se break ao ciclo, se o guiché já existir na lista ativa-se a variável de ciclo infernal e dá-se break
// se o guiché ainda não estiver na lista adiciona-se
//No final imprime-se para cada caso os elementos da lista separados por ' ' e caso seja ciclo infernal ainda se imprime "CICLO INFERNAL" no final
#include<stdio.h>

int existe (int x, int c[], int l){

    for(int i=0;i<l;i++){
        if(x == c[i]) return 1;
    }

    return -1;
}

int main(){
    int linhas=0;

    if(scanf("%d",&linhas) != 1) return -1;

    int cases[linhas][100];
    int ncases[linhas];
    int fstcase[linhas];

    for(int i=0;i<linhas;i++){
        if(scanf("%d",&ncases[i]) != 1) return -1;
         

        if(scanf("%d",&fstcase[i]) != 1) return -1;

        for(int j=0;j<ncases[i];j++){
            if(scanf("%d",&cases[i][j]) != 1) return -1;
        }
    }

    for(int j=0;j<linhas;j++){
        int arraux [ncases[j]];

        arraux[0] = fstcase[j];
        int comp = 1;
        int cicloinf = 0;
       

        for (int k=0;k<ncases[j];k++){
            if (cases[j] [(arraux[k])-1] == 0) break;
            else if(existe (cases[j] [(arraux[k])-1],arraux, comp) == 1){
                cicloinf = 1;
                break;
            }
            else{
                arraux[k+1] = cases [j] [(arraux[k])-1];
                comp+=1;
            }

        }


        if(cicloinf == 1){
            for(int l=0;l<comp;l++) printf("%d ",arraux[l]);
            printf("CICLO INFERNAL\n");
        }
        else if (cicloinf == 0){
            for(int l=0;l<comp;l++) {
                if(l==comp-1) printf("%d",arraux[l]);
                else printf("%d ",arraux[l]);
            }
            putchar ('\n');
        }
    }

    return 0;
    
}