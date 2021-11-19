#include <stdio.h>
#include <time.h>

void ordenar_vetor(int [], int);

int main(void){
   
    int n;
    scanf("%d", &n);
    
    int A[n];
    int size = 0;
    int value = 0;
    //enquanto conseguir ler valores antes de chegar no fim do arquivo
    while(scanf("%d ", &value) > 0) {
    A[size++] = value;
    }
       
    /* ordena o vetor em ordem crescente */
    ordenar_vetor(A, n);
   
    /* mostra o vetor v ordenado */
    for(int i = 0; i < n; i++){
        printf("%d ", A[i]);
    }    
       
    printf("\n");
    return 0;
}

void ordenar_vetor(int v[], int tamanho)
{
     int i, j, temp;
     
     for(i = 0; i < tamanho - 1; i++){
             
         for(j = 0; j < tamanho - 1; j++){
             if(v[j] > v[j + 1]){
                 temp = v[j];
                 v[j] = v[j + 1];
                 v[j + 1] = temp;
             }
         }
     }
}
 
