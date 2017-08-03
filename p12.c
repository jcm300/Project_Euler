#include <stdio.h>

#define DIVISORS 500

int divisors(int x){  //do a better inmplementation because this function leads to a runtime execution very high (aproximality 11 minutes).
    int divs=1, i;

    for(i=1; i<x/2; i++){
        if(x%i==0) divs++;
    }
    return divs;
}

int main(){
    int triangles=0, i=1, nDiv=0;

    while(nDiv<=DIVISORS){
        triangles+=i;
        nDiv=divisors(triangles); 
        i++;
    }

    printf("The value is %d.\n",triangles);
}
