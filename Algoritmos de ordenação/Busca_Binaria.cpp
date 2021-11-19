#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int busca_binaria(vector<int> &vetor, int n, int item){
    int inicio = 0; //início do vetor
    int fim = n-1; //fim do vetor
    
    int contador = 0; //número de iterações para encontrar um elemento no vetor
    
    while(inicio <= fim){
        int meio = (inicio+fim)/2; //divisão inteira
        contador++;
        
        if(vetor[meio] == item) break;
        else{
            if(vetor[meio] > item) fim=meio-1;
            else inicio=meio+1;
        }
    }
    
   return contador;
}

int main(){
   int n, m; 
   cin >> n >> m; 
   vector<int> vetor(n); 
   
   for(int i=0;i<n;i++){ 
       cin >> vetor[i]; 
   } 
   
    int item; 
    for(int j=0;j<m;j++){ 
       cin >> item; 
       cout << busca_binaria(vetor, n, item);  
       if(j < m-1){ 
           cout << " "; 
       } 
    }
   
   cout << endl; 
   return 0;
}
