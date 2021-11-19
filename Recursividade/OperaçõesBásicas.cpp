#include <iostream>

using namespace std;

void imprimirVetor(int vet[], int n){
    cout << "vet : [ ";
    for(int i = 0; i < n; i++)
        cout << vet[i] << " ";
    cout << "]\n";
}

void rvet(int vet[], int n){
    for(int i = n-1; i>=0; i--)
        printf(" %d", vet[i]);
   
    //if(n > 0){
    //    cout << " " << vet[n];
    //    rvet(vet, n-1);
   // }
   
}

int sum(int vet[], int n){
    if(n == 0) return 0;
    else
    return (vet[n - 1] + sum(vet, n - 1));
}

int mult(int vet[], int n, int m){
     int temp = 0;
     if(m == n) return vet[m];
     else
      temp = vet[m] * mult(vet, n, m+1);

      return temp;

}

int min(int vet[], int n){
   if(n == 1) return vet[0];
   
   int m = min(vet + 1, n - 1);
   return (vet[0] < m) ? vet[0]:m;
   
}
void inv(int vet[], int n){
    for(int i = n-1; i>=0; i--)
        printf(" %d", vet[i]);
    
}

int main(){
    
   int vet[1000];
   int size = 0;
   int value = 0;
   //enquanto conseguir ler valores antes de chegar no fim do arquivo
   while(scanf("%d", &value) > 0) 
     vet[size++] = value;
   
   
  imprimirVetor(vet, size);
  
  cout << "rvet: [";
  rvet(vet, size);
  cout << " ]\n";
  
  cout <<"sum : "<< sum(vet, size);
  cout << endl;
  
  cout <<"mult: ";
  cout << mult(vet, size-1, 0);
  cout << endl;
  
  cout <<"min : ";
  cout << min(vet, size);
  cout << endl;
  
  cout <<"inv : [";
  inv(vet, size);
  cout << " ]\n";
  
  return 0;
}
