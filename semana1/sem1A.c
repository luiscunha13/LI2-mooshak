// Requisitos: receber 5 inteiros linha a linha e devolver o número de ordem do maior inteiro
// Para receber os 5 inteiros vou fazer 5 scanf que irá atribuir os valores dos inteiros a 5 variáveis (a,b,c,d,e)
// De seguida vou fazer diferentes if statements para determinar qual é o maior valor e atribui-lo a uma outra variável (y)
// No final se o y for igual ao a imprimo 1, se for igual ao b imprimo 2, ...




#include<stdio.h>

int main () {
    int a,b,c,d,e,x,y;

    a = b = c = d = e = y = 0;

  if (scanf("%d",&x) == 1){
    a = x;
  }

  if (scanf("%d",&x) == 1){
    b = x;
  }

  if (scanf("%d",&x) == 1){
    c = x;
  }

  if (scanf("%d",&x) == 1){
    d = x;
  }

  if (scanf("%d",&x) == 1){
    e = x;
  }

if ((a>=b) && (a>=c) && (a>=d) && (a>=e)){
    y = a;
  }
  else {
    if ((b>=a) && (b>=c) && (b>=d) && (b>=e)){
      y = b;
    }
    else {
      if ((c>=a) && (c>=b) && (c>=d) && (c>=e)){
        y = c;
      }
      else {
        if ((d>=a) && (d>=b) && (d>=c) && (d>=e)){
          y = d;
        }
        else {
          y = e;
        }
      }
    }
  }

if (a == y){
    printf ("1\n");
}
    else{
        if (b == y){
        printf ("2\n");
    }
        else {
        if (c == y){
        printf ("3\n");
        }
            else {
            if (d == y){
            printf ("4\n");
            }
                else {
                if (e == y){
                printf ("5\n");
                }
            }
        }
    }
}

    return 0;
}

//Refatoração

#include<stdio.h>

int main () {
    int a,b,c,d,e,y;

    a = b = c = d = e = y = 0;

  if (scanf("%d",&a) != 1){
    return -1;
  }

  if (scanf("%d",&b) != 1){
    return -1;
  }

  if (scanf("%d",&c) != 1){
    return -1;
  }

  if (scanf("%d",&d) != 1){
    return -1;
  }

  if (scanf("%d",&e) != 1){
    return -1;
  }

if ((a>=b) && (a>=c) && (a>=d) && (a>=e)){
    printf ("1\n");
  }
  else {
    if ((b>=a) && (b>=c) && (b>=d) && (b>=e)){
      printf ("2\n");
    }
    else {
      if ((c>=a) && (c>=b) && (c>=d) && (c>=e)){
        printf ("3\n");
      }
      else {
        if ((d>=a) && (d>=b) && (d>=c) && (d>=e)){
          printf ("4\n");
        }
        else {
          printf ("5\n");
        }
      }
    }
  }


    return 0;
}

//Otimização

#include<stdio.h>

int main () {
    int l[5], f=0;

    for (int i=0;i<5;i++){
      if(scanf("%d",&l[i])!=1) return -1;
    }

    int max=l[0];

    for(int j=0;j<5;j++){
      if(l[j] > max){
        max = l[j];
        f = j+1;
      }
        
    }

    printf("%d\n",&f);

    return 0;
}
