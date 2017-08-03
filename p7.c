#include <stdio.h>
#include "baseF.h"

#define PRIMENUMBERPOS 10001

int main(){
    int primes=0, i=0;

    while(primes!=PRIMENUMBERPOS){
        if(isPrime(i)) primes++;
        i++;
    }
    i--;
    printf("The %d prime is %d.\n",PRIMENUMBERPOS, i);
}
