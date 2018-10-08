//Metodo de Seleccion.c++

#include <stdio.h>
#define SIZE 7
void main(void) {
  int vector[SIZE];
  int j, i, temp;
  printf("Introduce los %d valores para ordenar:\n", SIZE);
  for(i=0; i<SIZE; i++) {
     printf("%d: ", i+1);
     scanf("%d", &vector[i]);
     printf("\n");
  }
  /* se aplica el algoritmo de la burbuja */
  for(i=0; i<(SIZE-1); i++) {
     for (j=i+1; j<SIZE; j++) {
        if(vector[j]<vector[i]) {
            temp=vector[j];
            vector[j]=vector[i];
            vector[i]=temp;
        }
     }
  }
  printf("El vector ordenado es:\n");
  for(i=0; i<SIZE ; i++) {
     printf("%d ", vector[i]);
  }
  printf("\n");
}