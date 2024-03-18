//Requisitos: receber 3 inteiros linha a linha e devolvê-los por ondem crescente numa só linha
// Vou fazer 3 scanf para receber os 3 inteiros e atribuir os seus valores a 3 variáveis (a,b,c)
// De seguida vou fazer vários if statements de forma a saber ordem pela qual têm de ser devolvidos

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
  
  if (a <= b && b <= c){
  printf("%d %d %d \n",a,b,c);
   }
    else{
      if (a <= c && c <= b){
      printf("%d %d %d\n",a,c,b);
      }
        else{
          if (b <= a && a <= c){
          printf("%d %d %d\n",b,a,c);
        }
          else{
            if (b <= c && c <= a){
            printf("%d %d %d\n",b,c,a);
            }
              else{
                if (c <= a && a <= b){
                printf("%d %d %d\n",c,a,b);
                }
                 else{
                  if (c <= b && b <= a){
                  printf("%d %d %d\n",c,b,a);
                  }
                    else{
                      printf("%d %d %d\n",a,b,c);
                    }
                }
            }
        }
      }
   }

    return 0;
  
}

