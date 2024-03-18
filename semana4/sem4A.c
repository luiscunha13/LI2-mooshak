//Requisitos: o programa deve ler um inteiro N que corresponde ao número de casos e N linhas de strings contendo várias palavras separadas por espaços
//deve ler as palavras de cada linha e ver quais delas são palavras compostas por consoantes alternadas com vogais
// deve devolver linha a linha o número de palavras alternadas de cada linha
//Primeiramente vou usar um scanf para receber o inteiro n correspondente ao número de linhas de palavras
//De seguida vou fazer um ciclo for n vezes onde recebo a linha de palavras com um scanf("%[^\n]s") (para receber também os espaços) e saber a comprimento dessa string
//Vou criar uma função auxiliar que deteta se um char é uma vogal
//Vou criar um ciclo for que vai ver se a letra anterior é uma vogal ou não ir adicionando um acumulador
 
#include<stdio.h>
#include<string.h>


int evogal (char c){

    if ( c=='A' || c=='E' || c=='I' || c=='O' || c =='U' || c=='Y') return 1;
    else return -1;
}

int main () {
    char l[1000];
    int linhas, comp_linha, acc=0, aux=0, total=0;


    if (scanf("%d",&linhas) != 1) return -1;
    
    int resposta[linhas];

    for(int i=0;i<linhas;i++){
    
        if(scanf(" %[^\n]s", l) != 1) return -1;
        
        comp_linha = strlen (l);

        total=aux=acc=0;

        for(int j=1;j<comp_linha;j++){
            if(j==comp_linha-1){
                if((evogal(l[j]) == 1 && evogal (l[j-1]) == -1) 
                || (evogal(l[j]) == -1 && evogal (l[j-1]) == 1)){
                    acc+=1;
                    aux+=1;
            
                if(acc == aux)  total+=1;
                }
            }
            else if(l[j] == ' ') {
                if(acc == aux)  total+=1;
                    acc=0;
                    aux=0;
            }
            else if(l[j-1] == ' ') continue;
            else if((evogal(l[j]) == 1 && evogal (l[j-1]) == -1) 
                 || (evogal(l[j]) == -1 && evogal (l[j-1]) == 1)){
                acc+=1;
                aux+=1;
            }
            else {
                aux+=1;
            }

        }

        resposta[i] = total;

    }

    for(int j=0;j<linhas;j++) printf ("%d\n",resposta[j]);

    return 0;

}