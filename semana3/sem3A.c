//Requisitos: o programa deve receber um int e uma string, a string deve ser dividida em blocos de n char (n=numero de numeros do int recebido) 
//e depois deve imprimir o x caractere de cadab bloco pela ordem do int recebido
//Primeiro receber o int com um scanf, depois dividir o numero sucessivamente por 10 para saber quandos algarismos tem, de seguida colocar cada int num array
// depois faz scanf da string e strlen da mesma. Depois vai-se buscar o n elemsnto da string(primeiro int do array) e os n+length seguintes até ao final da string
// e quando chegar ao final faz-se o mesmo com os ints seguintes

#include<stdio.h>
#include<string.h>

int main () {
    
    int sizen = 0, sizel = 0, aux = 0, n[8], numero = 0;
    char l[1000];

    if(scanf("%d",&numero)!=1) return -1;
    

    aux = numero;
    while (aux != 0) {
        aux /= 10;
        sizen++;
    }
   
    aux = numero;
    int j = sizen-1;
    while (aux != 0) {
        n[j] = aux % 10;
        aux /= 10;
        j--;
    }

    if(scanf("%s",l)!=1){
        return -1;
    }
    sizel = strlen (l);

    for(int i=0; i<sizen;i++){
        for(int j=n[i]-1; j<sizel;j+=sizen){
            putchar(l[j]);
        }
    }

    putchar('\n');

    return 0;
}