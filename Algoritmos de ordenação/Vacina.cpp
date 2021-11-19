#include <stdio.h>
#include <time.h>

void ordenar_vetor(int [], int);

int main(void){
   
    int n;
    scanf("%d", &n);
    
    int forcaDaVacina[n];
    int size = 0;
    int value = 0;
    //enquanto conseguir ler valores antes de chegar no fim do arquivo
    while(scanf("%d ", &value) > 0) {
    forcaDaVacina[size++] = value;
    }
    
    int paciente[n];
    int tamanho = 0;
    int valor = 0;
    //enquanto conseguir ler valores antes de chegar no fim do arquivo
    while(scanf("%d ", &valor) > 0) {
    paciente[tamanho++] = valor;
    }
     
    /* ordena o vetor em ordem crescente */
    ordenar_vetor(forcaDaVacina, n);
    
    ordenar_vetor(paciente, n);
    
    int flag;
    for(int i = 0; i < n; i++){
        if(forcaDaVacina[i] > paciente[i]) flag = 1;
        
        else flag = 0;
    }
    
    
    if(flag == 1) printf("Yes");
    if(flag == 0) printf("No");
   
    printf("\n");
    return 0;
}

void ordenar_vetor(int v[], int tamanho){
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
