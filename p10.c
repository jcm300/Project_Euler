#include <stdio.h>
#include "baseF.h"

#define PRIMESBELOW 2000000

int main(){
    long sum=0, i;

    for(i=0; i<PRIMESBELOW; i++)
        if(isPrime(i)) sum+=i;

    printf("The sum is %ld.\n", sum);
}
