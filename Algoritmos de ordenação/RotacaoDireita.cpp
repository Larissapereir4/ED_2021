#include <iostream>
#include <vector>
using namespace std;

void right_rotation(vector<int>& vet, int size, int nrot){
   for(int i = 0; i < nrot; i++){    
        int j, last;    
        //Armazena o último elemento da matriz    
        last = vet[size-1];    
        
        for(j = size-1; j > 0; j--){    
            //Muda o elemento da matriz por um    
            vet[j] = vet[j-1];    
        }    
        //O último elemento do array será adicionado ao início do array.    
        vet[0] = last;    
    }    
}

void show(vector<int> &vet) {
    cout << "[ ";
    for(int value : vet)
        cout << value << " ";
    cout << "]\n";
}

int main(){
    int size, nrot;
    cin >> size >> nrot;
    vector<int> vet(size);
    for(int i = 0; i < size; i++)
        cin >> vet[i];
    
    right_rotation(vet, size, nrot);
    show(vet);
}
