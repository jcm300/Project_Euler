#include <stdio.h>

#define N 4000000

int main(){
    long x=2, prev=1, aux, sum=0L;

    while(x<N){
        if(x%2==0) sum+=x;
        aux=x;
        x+=prev;
        prev=aux;
    }

    printf("The sum is: %d.\n", sum);
}
