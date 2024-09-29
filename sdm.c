#include <stdio.h>

int main(){

    int m1,n1,m2,n2,j,i;
    int a[1000][1000], b[1000][1000], c[100][100];
    do{
        printf("Dame el numero de filas y columnas de la primer matriz\n");
        scanf("%d %d", &m1,&n1);
        printf("Dame el numero de filas y columnas de la segunda matriz\n");
        scanf("%d %d", &m2,&n2);
    }while(m1!=m2 || n1!=n2);

    for(j=0;j<n1;j++){
        for(i=0;i<m1;i++){
            printf("Dame el valor de la primer matriz en [%d] [%d]\n", j, i);
            scanf("%d",&a[j][i]);
        }

    }

    for(j=0;j<n1;j++){
        for(i=0;i<m1;i++){
            printf("Dame el valor de la segunda matriz en [%d] [%d]\n", j, i);
            scanf("%d",&b[j][i]);
        }

    }
    printf("La matriz resultante de la suma de las matrices es:\n");

    for(j=0;j<n1;j++){
        for(i=0;i<m1;i++){
            printf("%d\t", c[j][i]=a[j][i]+b[j][i]);
        }
    }
    return 0;
}
