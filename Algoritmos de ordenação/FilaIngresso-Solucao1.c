/* Guilherme A. Pinto - OBI 2014 - Fila */

#include <stdio.h>
#include <stdlib.h>

#define MAX 50000
#define MAXV 100000

int f[MAX];
int rev[MAXV+1];

int main() {
  int i,N,M,c,flag;

  scanf("%d",&N);
  for ( i = 0; i < N; i++ )
    scanf("%d",&f[i]);

  for ( i = 0; i <= MAXV; i++ ) rev[i] = 1;
  scanf("%d",&M);
  for ( i = 0; i < M; i++ ){
    scanf("%d",&c);
    rev[c] = 0;
  }

  for ( flag = 1, i = 0; i < N; i++ ){
    if ( rev[f[i]] ){
      if ( flag ){
	printf("%d", f[i]);
	flag = 0;
      } else printf(" %d", f[i]);
    }    
  }
  printf("\n");
 
  return 0;
}
