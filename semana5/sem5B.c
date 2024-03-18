//Requisitos: o programa tem que receber um int n que é o número de agentes e um int x que é o número de linhas
// depois vai receber x linhas com o numero do agente, a hora de entrada e hora de saída
//depois deev imprimir uma linha para cada hora com o número dos agentes que trabalharam simultaneamente a essa hora
// Primeiro vou fazer scan do número de agentes e do número de linhas
// Vou criar 3 listas, uma para o numero dos agentes, uma paras as horas de chegada e uma para as horas de saída e vou fazer um ciclo for para colocar lá os valores
// Vou fazer um ciclo for que para cada hora vê os agentes que trabalharam e guarda-os numa lista, que depois é ordenada por uma função auxiliar
// Depois é impressa a hora e à frente os agentes 

#include<stdio.h>

int existe (int l[], int size, int num){
    for(int i=0;i<size;i++){
        if (num == l[i]) return 1;
    }

    return 0;
}

void ordena (int l[],int size){
    int aux;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++){
            if(l[i] > l[j]) {
                aux = l[i];
                l[i] = l[j];
                l[j] = aux;
            }
        }
    }
}

int main() {

    int nagentes=0, linhas=0;

    if(scanf("%d",&nagentes) != 1) return -1;

    if(scanf("%d",&linhas) != 1) return -1;

    int **ag, cheg[linhas], part[linhas];

    for(int i=0;i<linhas;i++){
        for(int j=0;j<3;j++){
            if(j==0) {
                if (scanf("%d",&ag[i])!=1) return -1;
            }
            if(j==1) {
                if (scanf("%d",&cheg[i])!=1) return -1;
            }
            if(j==2) {
                if (scanf("%d",&part[i])!=1) return -1;
            }
        }
    }

    for(int j=0;j<24;j++){

        int final[linhas], acc=0;

        for(int k=0;k<linhas;k++){
            if (cheg[k] <= j && part[k] >= j){
                if(existe(final,acc,ag[k])==0){
                    final[acc] = ag[k];
                    acc++;
                }
                
            }
        }

        if (acc>1){
            ordena(final,acc);

            printf("%d ",j);
            for(int l=0;l<acc;l++) {
                if(l==acc-1){
                    printf("%d",final[l]);
                }
                else{
                    printf("%d",final[l]);
                    putchar(' ');
                }
                
            }
            putchar('\n');
        }
            
    }

    return 0;

}