#include <iostream>

using namespace std;

int bubble_sort(int A[], int n){
    int count = 0;
    bool swapped = true;
    
    while(swapped != false){
        swapped = false;
        count++;
        for(int i=0; i < n-1; i++){
            if(A[i] >= A[i+1]){
                swap(A[i], A[i+1]);
                swapped = true;
            }
        }
    }
    
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    
    int A[n];
    int size = 0;
    int value = 0;
    //enquanto conseguir ler valores antes de chegar no fim do arquivo
    while(scanf("%d ", &value) > 0) {
    A[size++] = value;
    }
    
    printf("%d", bubble_sort(A, n));
    printf("\n");
    return 0;
}
