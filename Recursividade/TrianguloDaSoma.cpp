#include <iostream>

using namespace std;

void calcularTriangulo(int A[] , int n){
	if (n < 1) return;

	int temp[n - 1];
	for (int i = 0; i < n - 1; i++){
			int x = A[i] + A[i + 1];
			temp[i] = x;
		}

	calcularTriangulo(temp, n - 1);

    cout << "[ ";
	for (int i = 0; i < n ; i++){
			if(i == n - 1)
				cout << A[i];
			else
			cout << A[i] << " ";
		}
				
		cout << " ]\n";
	}

int main(){
   
   int vet[1000];
   int size = 0;
   int value = 0;
   //enquanto conseguir ler valores antes de chegar no fim do arquivo
   while(scanf("%d", &value) > 0) 
     vet[size++] = value;
		
	calcularTriangulo(vet, size);
	return 0;
}
