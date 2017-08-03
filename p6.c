#include <stdio.h>

#define N 100

int main(){
    int sumS=0, squareS=0, i, diff;

    for(i=0; i<=N; i++){
        sumS+=i*i;
        squareS+=i;
    }
    squareS=squareS*squareS;
    diff = squareS - sumS;

    printf("The difference is %d.\n", diff);
}
