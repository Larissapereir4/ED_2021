#include <stdio.h>  
   
int main()  
{  
    int n;
    scanf("%d", &n);
    bool repete = false;
    
    int A[n];
    int size = 0;
    int value = 0;
    //enquanto conseguir ler valores antes de chegar no fim do arquivo
    while(scanf("%d ", &value) > 0) {
    A[size++] = value;
    }
    
    int count = 0;  
    //Procura por elementos repetidos  
    for(int i = 0; i < n; i++) {  
        for(int j = i + 1; j < n; j++) {  
            if(A[i] == A[j] && repete == false) {
                count++;
                repete = true;
            }
        }  
        repete = false;
    }  
    
    
    printf("%d", count);
    
    printf("\n");
    
    return 0;  
}    
        