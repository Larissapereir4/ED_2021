#include <bits/stdc++.h>
using namespace std;

int N;
int vetor[100];

void virar(int m) {
  for (int i = 1, j = m; i < j; i++, j--) {
    swap(vetor[i], vetor[j]);
  }
}

void tapioca_sort(int n) {
  if (n < 1) return;
  int virada = -1;
  for (int i = 1; i <= n; i++) {
    if (vetor[i] == n) {
      virada = i;
      break;
    }
  }
  if (virada == n) {
    tapioca_sort(n-1);
  } else {
    //Mudar posição para o início
    if (virada != 1) {
      int espatula = N-virada+1;
      cout << espatula << " ";
      virar(virada);
    }
    //Invertendo tudo
    cout << N-n+1 << " ";
    virar(n);
    tapioca_sort(n-1);
  }
}


int main() {
  cin >> N;

  for (int i = 1; i <= N; ++i) {
    cin >> vetor[i];
  }

  tapioca_sort(N);
  cout << "0\n";

}
 