//Requisitos: receber um inteiro referente ao andar inicial, receber um inteiro referente ao maior andar, receber um inteiro n referente ao número de
// vezes que o elevador vai funcionar
// receber n inteiros, 1 se o elevador subir um andar  ou -1 se o elevador descer um andar, devolver o andar em que o elevador ficou no final 
// fazer 3 scanf para receber o andar inicial, o maior andar e o nº de vezes que ele vai anda, um a um
// Receber n inteiros, um a um, e se for 1 o elevador sobe 1 andar(exceto se já estiver no maior andar) e se for -1 desce 1 andar (exceto se já estiver no andar 0)
// Usar um printf para devolver o andar final

#include<stdio.h>

int main () {
    int andar_atual, maior_andar, num_viagens, aux;

    if (scanf("%d",&andar_atual) != 1)return -1;

    if (scanf("%d",&maior_andar) != 1) return -1;

    if (scanf("%d",&num_viagens) != 1) return -1;

    for (int i=0; i<num_viagens; i++){
        if ((scanf("%d",&aux) == 1)){
            if ((aux == 1) && (andar_atual != maior_andar)){
                andar_atual += 1;
            }
            if ((aux == (-1)) && (andar_atual != 0)){
                andar_atual -= 1;
            } 
        }
        else{
            return -1;
        }
    }

    printf ("%d\n", andar_atual);

    return 0;

}