#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &vetor){
    for(int i = 1; i < vetor.size(); i++){
        int key = vetor.at(i);
        int j = i-1;
        
        while(j >= 0 && vetor.at(j) > key){
            vetor.at(j+1) = vetor.at(j);
            j--;
        }
        
        vetor.at(j+1) = key;
    }
}

int main(){
    vector<int> vetor;
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        int comando, m;
        cin >> comando >> m;
        
        if(comando == 1){
            vetor.push_back(m);
            insertion_sort(vetor);
        } else{
            cout << vetor.at(m) << endl;
        }
    }
    
    return 0;
}