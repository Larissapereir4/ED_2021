#include <stdio.h>
 
int main(){
   int array[100], n, c, d, position, swap, count;
    //Recebendo o tamanho do vetor
   scanf("%d", &n);
    //Recebendo os elementos do vetor
   for ( c = 0 ; c < n ; c++ )
      scanf("%d", &array[c]);
 
   for ( c = 0 ; c < ( n - 1 ) ; c++ ){
      position = c;
 
      for ( d = c + 1 ; d < n ; d++ ){
         if ( array[position] > array[d] )
            position = d;
      }
      if ( position != c ){
         swap = array[c];
         array[c] = array[position];
         array[position] = swap;
         count++;
      }
   }
 
   printf("%d\n", count);
   return 0;
}