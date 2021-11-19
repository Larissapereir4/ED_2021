#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main (){

    int n;
    cin >> n;

    vector < int >bruno (n);
    for (int i = 0; i < n; i++)
        cin >> bruno[i];

    vector < int >getulio (n);
    for (int i = 0; i < n; i++)
        cin >> getulio[i];

    sort(bruno.begin(), bruno.end());
    
    sort(getulio.begin(), getulio.end());
    

    bool figurinha = false;
    for (int i = 0; i < n; i++){
      if (bruno[i] != getulio[i])
	        figurinha = false;
      else
	    figurinha = true;
    }


  if (figurinha == true) cout << "1";
  if (figurinha == false) cout << "0";

  cout << endl;
  return 0;
}
