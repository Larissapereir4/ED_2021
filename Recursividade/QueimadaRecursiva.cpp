#include <iostream>
#include <vector>
using namespace std;

int linha = 0, coluna = 0, lfire = 0, cfire = 0;
char mat[1000][1000];

void show(){
    for(int l = 0; l < linha; l++){
        for(int c = 0; c < coluna; c++){
            cout << mat[l][c];

        }
        cout << endl;
    }
}

void tocar_fogo(int l, int c){

  if(mat[l][c] == '#'){
      mat[l][c] = 'o';
      if(c+1 < coluna && mat[l][c+1]== '#'){
          tocar_fogo(l, c+1);

      }
    if(c-1 >= 0 && mat[l][c-1] == '#'){
        tocar_fogo(l,c-1);
    }

    if(l-1 >=0 && mat[l-1][c] == '#' ){
        tocar_fogo(l-1,c);
    }

    if(l+1 < linha && mat[l+1][c] == '#'){
        tocar_fogo(l+1, c);
    }
  }


/*
direita -> l, c+1
esquerda -> l, c-1
cima -> l-1, c
baixo -> l+1, c*/
}

int main(){

    cin >> linha >> coluna >> lfire >> cfire;

    for(int l = 0; l < linha; l++){
        for(int c = 0; c < coluna; c++){
            cin >> mat[l][c];
        }
    }

    tocar_fogo(lfire, cfire);
    show();
}
