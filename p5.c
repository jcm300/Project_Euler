#include <stdio.h>

#define DIV 20 //maximum number of divisors

int main(){
    int notFound=1, x=2, i; //ignoring 0 and 1

    while(notFound){
        notFound=0;
        for(i=2; i<=DIV && !notFound; i++){
            if(x%i!=0){
                x++;
                notFound=1;
            }
        }
    }

    printf("The smallest number is %d.\n", x);
}
