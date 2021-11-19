#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    
    vector <string> vetor;

    for (int i = 0; i < n; ++i) {
        string value;
        cin >> value;
        vetor.push_back(value);
    }
    
    int m;
    cin >> m;
  
    for(int i=0; i <m;i++){
        string value;
        cin >> value;
        cout << count(vetor.begin(), vetor.end(), value);
        
        if(i < m-1){
            cout << ' ';
        }
  }
    
    cout << endl;
        
    return 0;
}