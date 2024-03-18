//Requisitos: receber 3 inteiros linha a linha e devolver OK caso as alturas dos soldados sejam todas iguais ou estejam por ordem crescente ou decrescente ou Nao caso contrário
//Para receber os 3 inteiros vou fazer 5 scanf que irá atribuir os valores dos inteiros a 3 variáveis (a,b,c)
//De seguida vou fazer umas if statements para determinar se os inteiros estão por ordem crescente/ordem descrescente/são iguais, devolvendo OK ou se são diferentes, devolvendo NAO

#include<stdio.h>

int main () {
  int a,b,c,x;
  a = b = c = 0;

  if (scanf("%d",&x) == 1){
    a = x;
  }

  if (scanf("%d",&x) == 1){
    b = x;
  }

  if (scanf("%d",&x) == 1){
    c = x;
  }

    if (((a>=b) && (b>=c)) || ((a<=b) && (b<=c)) || ((a==b) && (b == c))){
      printf ("OK\n");
    }
    else {
      printf ("NAO\n");
    }

    return 0;
}

//Refatoração

#include<stdio.h>

int resolve_errors(){

    if (scanf("%d",&a) != 1){
    return -1;
  }

  if (scanf("%d",&b) != 1){
    return -1;
  }

  if (scanf("%d",&c) != 1){
    return -1;
  }

}


int main () {
  int soldado1, soldado2, soldado3;
  a = b = c = 0;
    resolve_errors(scanf("%d",&a))

    if (((a>=b) && (b>=c)) 
     || ((a<=b) && (b<=c)) 
     || ((a==b) && (b == c))){
      printf ("OK\n");
    }
    else {
      printf ("NAO\n");
    }

    return 0;
}
