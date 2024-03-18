#include<stdio.h>

int main () {
 int c, m, n, x;
     c = m = n = x = 0;

// andar em que o João começa
    if (scanf("%d",&x) == 1){
       c = x; 
    }   
// número máximo de andares
    if (scanf("%d",&x) == 1){
        m = x;
    }
// número de movimentos
    if (scanf("%d",&x) == 1){
       n = x;
    }

    for (int i=0; i<n; i++){
        if ((scanf("%d",&x) == 1)){
           if ((x == 1) && (c != m)){
            c += 1;
        }
        if ((x == (-1)) && (c != 0)){
            c -= 1;
        } 
        }
    }
    
    printf ("%d\n", c);
    return 0;
} 