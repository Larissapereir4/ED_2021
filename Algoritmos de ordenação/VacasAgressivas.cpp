#include<stdio.h>
#include<stdlib.h>
#include <iostream>
using namespace std;

int a[1000],c,n;

int cmp(const void *a,const void *b){

    return (*(int*)a-*(int*)b);

}

int pd(int y){

    int i;
    int j = 1;
    int s = a[0];

    for(i=0;i<n;i++){
        if(a[i]-s >= y){
            j++;
            s=a[i];
        }
    }

    if(j>=c) return 1;

    return 0;

}

int main(){

    extern int a[1000],c,n;

    int i,x,y,z;
    //N=Número de baias; C=Número de vacas
    scanf("%d%d",&n,&c);
    //Passando a localização das baias
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);    
    }    

    qsort(a,n,4,cmp);

    x = a[n-1]-a[0];
    z = 0;

    //Busca Binária
    while(x > z){
        y=z+(x-z+1)/2;

        if(pd(y)==1){
            z=y;
        }

        else{
            x=y-1;
        }

    }

    //Imprimindo o a maior distância mínima
    printf("%d\n",z);
    return 0;
}