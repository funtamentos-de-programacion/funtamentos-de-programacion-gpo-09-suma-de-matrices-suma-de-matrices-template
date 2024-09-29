#include <stdio.h>
#define TAM 100

int main(){
  int a[TAM][TAM], b[TAM][TAM], c[TAM][TAM];
  int m, n, p, q;
  int i, j;

  do{
    printf("Ingresa las dimensiones de la primer matriz\n");
    scanf("%d %d", &m, &n);
    printf("Ingresa las dimensiones de la segunda matriz\n");
    scanf("%d %d", &p, &q);
  }while(m!=p || n!=q || m <=0 || n<=0 || p <= 0 ||  q <=0);


  for(i =0; i <m; i++){
    for(j=0; j <n ; j++){
        printf("Ingresa el valor de la primer matriz en la posición [%i][%i]\n", i, j);
        scanf("%d", &a[i][j]);
        printf("Ingresa el valor de la segunda matriz en la posición [%i][%i]\n", i, j);
        scanf("%d", &b[i][j]);
        
        r[i][j]=a[i][j]+b[i][j]; 
        printf("El resultado en la posición [%i][%i] es: \n", i, j);
        printf("[%d]\n", r[i][j]);
    }
  }

  return 0;
}
