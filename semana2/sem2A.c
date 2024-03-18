//Requisitos: receber um inteiro n e receber n inteiros e devolver dois inteiros referentes à posição x e y
// A divisão inteira dos n inteiros por 4 é que irá determinar se x e y aumentam e diminuem
// Se a divisão inteira por 4 for 0, x+=1
// Se a divisão inteira por 4 for 1, y-=1
// Se a divisão inteira por 4 for 2, y+=1
// Se a divisão inteira por 4 for 3, x-=1
// Primeiro vou fazer um scanf para receber o inteiro n
//Depois vou fazer n scanf para receber os outros inteiros um a um e de seguida dividir os inteiros recebidos por 4, aumentando e diminuindo o x e o y

#include<stdio.h>

int main () {
    int numero_int, x, y, aux;

    x = y = 0;

     if (scanf("%d",&numero_int) != 1)return -1;

    for (int i=0; i<numero_int; i++){
        if ((scanf("%d",&aux) == 1)){
            if ((aux % 4) == 0){
                x += 1;
            }
            if ((aux % 4) == 1){
                y -= 1;
            }
            if ((aux % 4) == 2){
                y += 1;
            }
            if ((aux % 4) == 3){
                x -= 1;
            }
        }
        else{
            return -1;
        }
    }

    printf ("%d %d\n", x,y);

    return 0;
}