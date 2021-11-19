#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    // cria o array com n elementos
    int vetor[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &vetor[i]);
 
    // cria o array de índices (de zero até n-1)
    int indices[n];
    for (int i = 0; i < n; i++)
        indices[i] = i;
 
    for (int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            // em vez de usar j, uso o índice que está no array de índices
            if (vetor[indices[j]] > vetor[indices[j + 1]]) {
                int tmp = indices[j];
                indices[j] = indices[j + 1];
                indices[j + 1] = tmp;
            }
        }
    }
 
    
    for (int i = 0; i <= n-1; i++){
       if(i == n-1){
            printf("%d", indices[i]);
        }
        
        else printf("%d ", indices[i]);
    }    
    
     printf("\n");
   
    return 0;
}