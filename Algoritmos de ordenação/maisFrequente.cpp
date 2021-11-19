#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int maisFreq(int A[], int n)
{
    // Ordenar o array
    sort(A, A + n);
 
    int max_count = 1;
    int res = A[0];
    int atual_count = 1;
    for (int i = 1; i < n; i++) {
        if (A[i] == A[i - 1])
            atual_count++;
        else {
            if (atual_count > max_count) {
                max_count = atual_count;
                res = A[i - 1];
            }
            atual_count = 1;
        }
    }
 
    // Se o último elemento for o mais frequente
    if (atual_count > max_count)
    {
        max_count = atual_count;
        res = A[n - 1];
    }
 
    return res;
}
int main()
{   int n;
    scanf("%d", &n);
    
    int A[n];
    int size = 0;
    int value = 0;
    //enquanto conseguir ler valores antes de chegar no fim do arquivo
    while(scanf("%d ", &value) > 0) {
    A[size++] = value;
    }
   
	int freq = maisFreq(A , n);
	int count = 0;
	for(int i = 0; i < n; i++) {
		if(A[i] == freq) {
			count++;
		}
	}
	
	printf("%d %d", maisFreq(A , n), count);
	printf("\n");
	return 0;
}
