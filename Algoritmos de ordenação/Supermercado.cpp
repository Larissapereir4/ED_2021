#include <bits/stdc++.h>
using namespace std;
 
void selection_sort(vector<pair<int, string>> &vet, int n){
    for(int i = 0; i < n; i++){
        int imenor = i;
        for(int j = i+1; j < n; j++){
            if(vet[j] < vet[imenor]) imenor = j;
        }
       
        if(i != imenor){
            pair<int,string> aux = vet[i];
            vet[i] = vet[imenor];
            vet[imenor] = aux;
            
        }
    }
}
 
int main() {
    int n,m, p, q;
    cin >> n >> m >> p >> q;
    
    vector<pair<int,string>> aux;
    vector<pair<int,string>> vetor(n);
    for(int i=0; i <n;i++){
        cin >> vetor[i].second;
        cin >> vetor[i].first;
 }
 
    vector<pair<int,string>> vetor2(m);
    for(int i=0; i <m;i++){
        cin >> vetor2[i].second;
        cin >> vetor2[i].first;
 }

    selection_sort(vetor, n);
    selection_sort(vetor2, m);
         
    for(int i=0; i <p;i++){
        aux.push_back(vetor[i]);
            
    }
        
    for(int i=0; i <q;i++){
        aux.push_back(vetor2[i]);
    }  
    
    
    selection_sort(aux,p+q);
     for(int i=0; i <p+q;i++){
        cout << aux[i].second ;
        if(i < p+q-1){
           cout << " ";
        }
    }  
             
    cout << endl;
    return 0;
}